#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(int initialX, int initialY) {
	SetX(initialX);
	SetY(initialY);
}

Point::Point(const Point& pt) {
	cout << "복사 생성자 호출됨!!\n";
	x = pt.x;
	y = pt.y;
}

Point::Point() {
	x = 0;
	y = 0;
}

void Point::Print() const {
	cout << "( " << x << ", " << y << ") \n";
}
