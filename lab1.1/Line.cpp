/////////////////////Line.cpp
#include "Line.h"
#include <iostream>
#include <cmath>

using namespace std;

void Line::SetFirst(int value)
{
    first = value;
}
void Line::SetSecond( int value)
{
    second = value;
}
bool Line::Init(double x, double y)
{
    if (x != 0)
    {
        first = x;
        second = y;
        return true;
    }
    else
    {
        return false;
    }
}

void Line::Read()
{
    double x, y;
    do
    {
        cout << "Input line value:" << endl;
        cout << "A = ";cin >> x;
        cout << "B = ";cin >> y;
    } while (!Init(x, y));
}

void Line::Display() const
{
    cout << endl;
    cout << "A = " << first << endl;
    cout << "B = " << second << endl;
}

double Line::function(double x)const
{
    return (first * x) + second ;
}
