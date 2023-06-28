#include "queuePrinter.h"

Request::Request(const char name[], int h, int m, int s) {
    strcpy_s(this->name, name);
    hours = h;
    minutes = m;
    seconds = s;
}

void Request::getTime()
{
    cout << "Time -> " << hours << ":" << minutes << ":" << seconds << endl;
}

int Request::setHours(int h)
{
    if (h <= 12 && h >= 0 || h <= 24 && h >= 0)
    {
        hours = h;
    }
    return hours;
}

int Request::setMinutes(int m)
{
    if (m <= 60 && m >= 0)
    {
        minutes = m;
    }
    return minutes;
}

int Request::setSeconds(int s)
{
    if (s <= 60 && s >= 0)
    {
        seconds = s;
    }
    return seconds;
}

void Request::setTime(int h, int m, int s)
{
    setHours(h);
    setMinutes(m);
    setSeconds(s);
}

void Printer::addRequest(const char name[], int h, int m, int s)
{
    Request request(name, h, m, s);
    Queue.push(request);
    Data.push(request);
}

void Printer::infoRequest()
{
    if (!Queue.empty())
    {
        Request request = Queue.front();
        Queue.pop();
        cout << "Currently printing User: " << request.name << endl << endl;
    }
    else
    {
        cout << "No one is printing at the moment... " << endl;
    }
}

void Printer::infoData()
{
    cout << "Info to Data: " << endl << endl;
    for (; !Data.empty(); )
    {
        Request request = Data.front();
        Data.pop();
        cout << "User: " << request.name << " ";
        request.getTime();
    }
}