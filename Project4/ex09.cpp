#include <iostream>
using namespace std;

template<typename T>
class Circle {
	T x;
	T y;
	T radius;
public:

	Circle(T a, T b, T c) :x(a), y(b), radius(c) {}

	T area() {

		return 3.14 * radius * radius;
	}
};
int main() {
	Circle<double> circleA(0.0, 0.0, 10.0);
	cout << "¸éÀû: " << circleA.area() << endl;
	return 0;
}