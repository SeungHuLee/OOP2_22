#include "./Rect.h"
#include <iostream>

using namespace std;

int main() {
	Rect rc1;
	Rect rc2(Point(10, 20), Point(30, 40));
	Rect rc3(50, 60, 70, 80);

	rc1.Print();
	rc2.Print();
	rc3.Print();

	return 0;
}