QT -= core gui

include(../../../lib/vmld.pri)

TARGET    = c_leak_test
CONFIG   += console
CONFIG   -= app_bundle
TEMPLATE  = app
SOURCES  += c_leak_test.c
