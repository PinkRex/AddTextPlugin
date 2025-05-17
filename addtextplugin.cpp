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
        double scale = rect.width() / 100.0;
        scale = qBound(0.5, scale, 3.0);

        cv::Point pos(rect.x() + 10, rect.y() + 30);

        cv::putText(input, text.toStdString(), pos, cv::FONT_HERSHEY_SIMPLEX, scale, cv::Scalar(0, 255, 255), 1);
        output = input;
    }
}
