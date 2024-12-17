//
// Created by perci on 24-12-17.
//

#include "point.h"

#include <iostream>
using namespace std;

Point::Point() {
    x = 0;
    y = 0;
}
Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}
void Point::setPoint(int x, int y) {
    this->x += x;
    this->y += y;
}
void Point::display() {
    cout<<"("<<x<<","<<y<<")"<<endl;
}