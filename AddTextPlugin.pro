QT -= gui

QT += widgets

TEMPLATE = lib
DEFINES += ADDTEXTPLUGIN_LIBRARY
TARGET += AddTextPlugin
CONFIG += c++17
CONFIG += plugin
INCLUDEPATH += $$PWD/../Testing/public

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += addtextplugin.cpp \
    SelectionDialog.cpp
HEADERS += \
    SelectionDialog.h \
    addtextplugin.h \
    PhotoEditorPluginInterface.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target

win32: LIBS += -L$$PWD/../../../Downloads/opencv4.5.1_MinGW/opencv4.5.1_MinGW/install/x64/mingw/lib/ -llibopencv_highgui451.dll
win32: LIBS += -L$$PWD/../../../Downloads/opencv4.5.1_MinGW/opencv4.5.1_MinGW/install/x64/mingw/lib/ -llibopencv_imgproc451.dll
win32: LIBS += -L$$PWD/../../../Downloads/opencv4.5.1_MinGW/opencv4.5.1_MinGW/install/x64/mingw/lib/ -llibopencv_core451.dll
win32: LIBS += -L$$PWD/../../../Downloads/opencv4.5.1_MinGW/opencv4.5.1_MinGW/install/x64/mingw/lib/ -llibopencv_imgcodecs451.dll

INCLUDEPATH += $$PWD/../../../Downloads/opencv4.5.1_MinGW/opencv4.5.1_MinGW/install/include
DEPENDPATH += $$PWD/../../../Downloads/opencv4.5.1_MinGW/opencv4.5.1_MinGW/install/include
