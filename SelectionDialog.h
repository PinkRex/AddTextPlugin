#ifndef SELECTIONDIALOG_H
#define SELECTIONDIALOG_H

#include <QDialog>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QMouseEvent>
#include <QPainter>
#include <QImage>

class SelectionDialog : public QDialog {
    Q_OBJECT

public:
    explicit SelectionDialog(const QImage& image, QWidget *parent = nullptr);
    QRect getSelectedRect() const;

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent *event) override;

private:
    QImage image;
    QRect selection;
    bool selecting = false;
    QPoint origin;
};

#endif // SELECTIONDIALOG_H
