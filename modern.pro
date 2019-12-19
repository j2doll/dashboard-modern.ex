# modern.pro

QT += qml
QT += opengl
QT += quick

HEADERS += \
radarscaneffect.hpp

SOURCES += \
main.cpp \
radarscaneffect.cpp

RESOURCES += \
modern.qrc

OTHER_FILES += \
main.qml \
vert.glsl \
frag.glsl

