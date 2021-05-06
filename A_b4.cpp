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


	void print(){
		cout << &x <<endl;
		cout << &y <<endl;
		cout << "(" << x << "," << y << ")";
}
};

int main()
{
	Point a(2.0,5.0);
	cout << &a <<endl;
	a.print();
}
