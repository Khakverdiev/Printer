#include <iostream>
#include <queue>
#include <ctime>
#include "queuePrinter.h"

using namespace std;

int main()
{
    Printer printer;

    printer.addRequest("User1", 12, 10, 10);
    printer.addRequest("User2", 11, 25, 43);
    printer.addRequest("User3", 12, 48, 40);
    printer.infoRequest();
    printer.infoData();
}