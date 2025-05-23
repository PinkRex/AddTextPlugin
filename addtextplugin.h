#ifndef ADD_TEXT_PLUGIN_H
#define ADD_TEXT_PLUGIN_H

#include <QObject>
#include <QtPlugin>
#include <QInputDialog>
#include <QEventLoop>
#include <QDebug>
#include <QImage>
#include <QPixmap>
#include "PhotoEditorPluginInterface.h"

class AddTextPlugin: public QObject, public PhotoEditorPluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID PHOTO_EDITOR_PLUGIN_INTERFACE_IID)
    Q_INTERFACES(PhotoEditorPluginInterface)
public:
    QString name() override;
    void edit(const cv::Mat &input, cv::Mat &output, QWidget* parent) override;
};

#endif // ADD_TEXT_PLUGIN_H
