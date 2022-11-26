#include <iostream>
using namespace std;

template<typename T>
void getSmallest(T a[], int b) {
	T min = a[0];

	for (int i = 0; i < b; i++) {
		if (min > a[i])
			min = a[i];
	}
	cout << "ÃÖ¼Ò °ª: " << min << endl;

}
int main() {

	double list[] = { 1.2,3.3,9.0,1.5,8.7 };
	getSmallest(list, 5);
}