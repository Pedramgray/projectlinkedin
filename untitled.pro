QT       += core gui sql \
    quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    applyjob.cpp \
    comment.cpp \
    homepage.cpp \
    imnotarobot.cpp \
    jobapplyacseptcompany.cpp \
    login.cpp \
    main.cpp \
    makecompany.cpp \
    makejob.cpp \
    messaging.cpp \
    mynetwork.cpp \
    myprofile.cpp \
    notification.cpp \
    popup.cpp \
    post.cpp \
    sendpost.cpp \
    signup.cpp \
    splashpage.cpp \
    theme.cpp \
    userprofile.cpp

HEADERS += \
    applyjob.h \
    comment.h \
    content.h \
    homepage.h \
    imnotarobot.h \
    jobapplyacseptcompany.h \
    login.h \
    makecompany.h \
    makejob.h \
    messaging.h \
    mynetwork.h \
    myprofile.h \
    notification.h \
    popup.h \
    post.h \
    sendpost.h \
    signup.h \
    splashpage.h \
    theme.h \
    userprofile.h

FORMS += \
    applyjob.ui \
    comment.ui \
    homepage.ui \
    imnotarobot.ui \
    jobapplyacseptcompany.ui \
    login.ui \
    makecompany.ui \
    makejob.ui \
    messaging.ui \
    mynetwork.ui \
    myprofile.ui \
    notification.ui \
    popup.ui \
    post.ui \
    sendpost.ui \
    signup.ui \
    splashpage.ui \
    theme.ui \
    userprofile.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    back.qrc \
    background.qrc \
    coworkers.qrc \
    designn.qrc \
    jiib.qrc \
    logoo.qrc

DISTFILES += \
    dark_mode.qss
