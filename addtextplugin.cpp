#include "addtextplugin.h"
#include "selectiondialog.h"

QString AddTextPlugin::name() {
    return "Add Text";
}

void AddTextPlugin::edit(const cv::Mat &input, cv::Mat &output, QWidget* parent) {
    QImage qimg = QImage(input.data, input.cols, input.rows, input.step, QImage::Format_RGB888).rgbSwapped();
    SelectionDialog dialog(qimg, parent);
    if (dialog.exec() != QDialog::Accepted) return;

    QRect rect = dialog.getSelectedRect();
    if (rect.isNull()) return;

    bool ok;
    QString text = QInputDialog::getText(parent, "Input Text", "Enter text:", QLineEdit::Normal, "", &ok);
    if (!ok) return;

    double fontScale = 3.0;
    int thickness = 2;
    int baseline = 0;
    cv::Size textSize;

    for (double scale = 3.0; scale >= 0.5; scale -= 0.1) {
        textSize = cv::getTextSize(text.toStdString(), cv::FONT_HERSHEY_SIMPLEX, scale, thickness, &baseline);
        if (textSize.width <= rect.width() && textSize.height + baseline <= rect.height()) {
            fontScale = scale;
            break;
        }
    }

    int x = rect.x() + (rect.width() - textSize.width) / 2;
    int y = rect.y() + (rect.height() + textSize.height) / 2;

    cv::Mat inputCopy;
    input.copyTo(inputCopy);
    cv::putText(inputCopy, text.toStdString(), cv::Point(x, y), cv::FONT_HERSHEY_SIMPLEX, fontScale, cv::Scalar(0, 255, 255), thickness);
    output = inputCopy;
}
