#pragma once
#include <iostream>
#include <queue>

using namespace std;

class Request
{
public:
    int minutes;
    int hours;
    int seconds;
    char name[50];
    Request() :minutes(0), hours(0), seconds(0)
    {}

    Request(const char name[], int h, int m, int s);

    void getTime();

    int setHours(int h);

    int setMinutes(int m);

    int setSeconds(int s);

    void setTime(int h, int m, int s);
};

class Printer
{
private:
    queue<Request> Queue;
    queue<Request> Data;
public:

    void addRequest(const char name[], int h, int m, int s);

    void infoRequest();

    void infoData();
};

