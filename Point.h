#pragma once
class Point {
public:
	enum { MIN_X = 0, MAX_X = 100, MIN_Y = 0, MAX_Y = 100 };

	void Print() const;
	void Offset(int x_delta, int y_delta);
	void Offset(const Point& pt);


	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);

	void SetX(int value);
	void SetY(int value);
	int GetX() const { return x; }
	int GetY() const { return y; }

private:
	int x, y;
};

inline void Point::SetX(int value) {
	if (value < MIN_X) x = 0;
	else if (value > MAX_X) x = 100;
	else x = value;
}
inline void Point::SetY(int value) {
	if (value < MIN_Y) y = 0;
	else if (value > MAX_Y) y = 100;
	else y = value;
}
