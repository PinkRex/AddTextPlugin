#include "selectiondialog.h"

SelectionDialog::SelectionDialog(const QImage& img, QWidget *parent)
    : QDialog(parent), image(img) {
    setWindowTitle("Select Region");
    setFixedSize(img.size());
    setModal(true);
}

QRect SelectionDialog::getSelectedRect() const {
    return selection.normalized();
}

void SelectionDialog::mousePressEvent(QMouseEvent *event) {
    origin = event->pos();
    selection = QRect();
    selecting = true;
    update();
}

void SelectionDialog::mouseMoveEvent(QMouseEvent *event) {
    if (selecting) {
        selection = QRect(origin, event->pos());
        update();
    }
}

void SelectionDialog::mouseReleaseEvent(QMouseEvent *event) {
    if (selecting) {
        selection = QRect(origin, event->pos());
        selecting = false;
        update();
        accept();
    }
}

void SelectionDialog::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.drawImage(0, 0, image);

    if (!selection.isNull()) {
        QColor fillColor(255, 0, 0, 80);
        painter.fillRect(selection, fillColor);

        QPen pen(Qt::red, 2, Qt::DashLine);
        painter.setPen(pen);
        painter.drawRect(selection);
    }
}
