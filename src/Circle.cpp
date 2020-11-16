//
// Created by Алексей Трутнев on 16.11.2020.
//

#include "Circle.h"
#include <cmath>

void Circle::setRadius(double R) {
    radius = R;
    ference = M_PI * radius;
    area = M_PI * radius * radius;
}

void Circle::setFerence(double F) {
    radius = F / M_PI;
    ference = F;
    area = F * radius;
}

void Circle::setArea(double A) {
    radius = sqrt(A / M_PI);
    ference = A / radius;
    area = A;
}

double Circle::getRadius() {
    return radius;
}

double Circle::getFerence() {
    return ference;
}

double Circle::getArea() {
    return area;
}
