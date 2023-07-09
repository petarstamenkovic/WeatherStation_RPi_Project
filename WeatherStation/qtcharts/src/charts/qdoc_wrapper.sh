#!/bin/sh
QT_VERSION=5.7.0
export QT_VERSION
QT_VER=5.7
export QT_VER
QT_VERSION_TAG=570
export QT_VERSION_TAG
QT_INSTALL_DOCS=/usr/share/qt5/doc
export QT_INSTALL_DOCS
BUILDDIR=/home/petar/Desktop/RaspberryPiProject/WeatherStation/qtcharts/src/charts
export BUILDDIR
exec /usr/lib/qt5/bin/qdoc "$@"
