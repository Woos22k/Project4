#include <iostream>
using namespace std;

class Time {
private:
	int hours;
	int minutes;
public:
	Time() :hours(0), minutes(0) {}
	Time(int h, int m) :hours(h), minutes(m) {}
	~Time() {}

	Time& operator++()
	{
		++minutes;
		if (minutes > 59) {
			++hours;
			minutes = 0;
		}

		return *this;
	}
	void displayTime() {
		cout << hours << ": " << minutes << endl;
	}
};
int main() {


	Time t{ 10, 59 };
	t.displayTime();

	Time t1 = ++t;
	t1.displayTime();

	Time t2 = ++t;
	t2.displayTime();
}