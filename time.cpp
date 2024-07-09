#include "time.h"

time::time()
{
    QDateTime current = QDateTime::currentDateTime();


    second = QString::number(current.time().second());
    minute = QString::number(current.time().minute());
    hour = QString::number(current.time().hour());
    day = QString::number(current.date().day());
    month = QString::number(current.date().month());
    year = QString::number(current.date().year());
}

QString time::get_second()
{
    return second;
}
QString time::get_minute()
{
    return minute;
}
QString time::get_hour()
{
    return hour;
}
QString time::get_day()
{
    return day;
}
QString time::get_month()
{
    return month;
}
QString time::get_year()
{
    return year;
}
