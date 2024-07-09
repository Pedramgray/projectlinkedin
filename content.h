#ifndef CONTENT_H
#define CONTENT_H

#include <QString>
#include "time.h"

class content
{

private:

    time time_send;
    QString sender_ID;
    QString content_text;
    QString content_Picture;
    QString content_Video;
    QString content_Audio;

public:
    content(QString sender_ID , QString content_text , QString content_Picture ,QString content_Video , QString content_Audio);
    QString get_sender_ID();
    QString get_content_text();
    QString get_content_Picture();
    QString get_content_Video();
    QString get_content_Audio();
    time get_time_send();

    //QString set_sender_ID();
    //QString set_content_text();
    //QString set_content_Picture();
    //QString set_content_Video();

};

#endif // CONTENT_H
