#include <8051.h>

#define XNULL 0x7F
#define X0 0xC0
#define X1 0xF9
#define X2 0xA4
#define X3 0xB0
#define X4 0x99
#define X5 0x92
#define X6 0x82
#define X7 0xF8
#define X8 0x80
#define X9 0x90

int og(int nr)
{
    int newNum = 0;
    while (nr)
    {
        newNum = newNum * 10 + nr % 10;
        nr /= 10;
    }
    return newNum;
}

void setPosition(int pos)
{
    switch (pos)
    {
    case 1:
        P3_3 = 0;
        P3_4 = 0;
        break;
    case 2:
        P3_3 = 1;
        if (P3_4 == 1)
            P3_4 = 0;
        break;
    case 3:
        if (P3_3 == 1)
            P3_3 = 0;
        P3_4 = 1;
        break;
    case 4:
        P3_3 = 1;
        P3_4 = 1;
        break;
    default:
        break;
    }
}

void displayDigit(int digit)
{
    if (digit == 0)
    {
        P1 = X0;
    }
    if (digit == 1)
    {
        P1 = X1;
    }
    if (digit == 2)
    {
        P1 = X2;
    }
    if (digit == 3)
    {
        P1 = X3;
    }
    if (digit == 4)
    {
        P1 = X4;
    }
    if (digit == 5)
    {
        P1 = X5;
    }
    if (digit == 6)
    {
        P1 = X6;
    }
    if (digit == 7)
    {
        P1 = X7;
    }
}

int main()
{
    int number;
    while (1)
    {
        number = 123;
        setPosition(1);
        displayDigit(number % 10);
        number /= 10;

        setPosition(2);
        displayDigit(number % 10);
        number /= 10;

        setPosition(3);
        displayDigit(number % 10);
        number /= 10;

        setPosition(4);
        displayDigit(number % 10);
        number /= 10;
    }
}