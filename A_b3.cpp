#include <iostream>

using namespace std;

struct Point
{
	double x;
	double y;

	Point(double _x, double _y) {
		x = _x;
		y = _y;
	}

	Point mid_point() const {
		Point mid;
		mid.x = x/2.0;
		mid.y = y/2.0;
		return mid;
	}

	void print() const {
		cout << "(" << x << "," << y << ")";
}

	Point() {}
};

int main()
{
	Point a(2.0,5.0);
	Point mid = a.mid_point();
	mid.print();
}
