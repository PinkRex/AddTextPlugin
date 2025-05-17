#include "addtextplugin.h"

QString AddTextPlugin::name() {
    return "Add Text";
}

void AddTextPlugin::edit(const cv::Mat &input, cv::Mat &output, QWidget* parent) {
    auto drawer = dynamic_cast<DrawingInterface*>(parent->findChild<QObject*>("imageView"));
    if (!drawer) {
        qDebug() << "No drawer";
        return;
    }

    drawer->enableSelectionMode(true);

    QEventLoop loop;
    QRect rect;
    drawer->onSelectionFinished([&](QRect r) {
        rect = r;
        loop.quit();
    });

    loop.exec();
    drawer->enableSelectionMode(false);

    bool ok;
    QString text = QInputDialog::getText(parent, "Input Text", "Enter text:", QLineEdit::Normal, "", &ok);
    if (!ok) return;

    if (!rect.isNull()) {
        double fontScale = 3.0;
        int thickness = 1;
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

        cv::putText(input, text.toStdString(), cv::Point(x, y), cv::FONT_HERSHEY_SIMPLEX, fontScale, cv::Scalar(0, 255, 255), thickness);
        output = input;

    }
}
