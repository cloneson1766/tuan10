#include <iostream>

using namespace std;

struct Point
{
	double x;
	double y;

	Point(double _x, double _y)
	{
		x = _x;
		y = _y;
	}

};

void print1(Point v) {
	cout << "Truyen tham tri: " << &v <<endl;
	cout << "(" << v.x << "," << v.y << ")" <<endl;
}

void print2(Point& v) {
	cout << "Truyen tham chieu: " << &v <<endl;
	cout << "(" << v.x << "," << v.y << ")" <<endl;
}


int main()
{
	Point a(1.1,2.0);
	cout << "Dia chi cua bien a: " << &a <<endl;
	print1(a);
	print2(a);
}
