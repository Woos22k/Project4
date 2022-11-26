#include <iostream>

using namespace std;

static int d = 0;
class Box {
public:
	int l, w, h, v;
	Box(int l = 0, int w = 0, int h = 0) :l(l), w(w), h(h), v(l* w* h) {};
	bool operator< (Box box)
	{
		return v < box.v;
	}

	void print() {
		++d;
		cout << "상자 #" << d << endl;
		cout << "상자의 길이: " << l << endl;
		cout << "상자의 너비: " << w << endl;
		cout << "상자의 높이: " << h << endl;
		cout << "상자의 부피: " << l * w * h << endl;

	}
};
int main() {
	int l, w, h, v;

	Box a(10, 10, 10), b(20, 20, 20);

	a.print();
	cout << endl;
	b.print();
	cout << endl;
	cout << (a < b);

}