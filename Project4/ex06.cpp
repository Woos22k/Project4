#include <iostream>
using namespace std;

class Weapon {
public:
	Weapon() {}
	virtual void load() = 0;
};
class Bomb :public Weapon {
public:
	Bomb() {}
	void load() {
		cout << "ÆøÅºÀ» ÀûÀçÇÕ´Ï´Ù." << endl;
	}
};
class Gun : public Weapon {
public:
	Gun() :Weapon() {}
	void load() {
		cout << "ÃÑÀ» ÀûÀçÇÕ´Ï´Ù." << endl;
	}
};
int main() {
	Weapon* w1 = new Gun();
	Weapon* w2 = new Bomb();
	Weapon* w3 = new Bomb();

	w1->load();
	w2->load();
	w3->load();

	delete w1;
	delete w2;
	delete w3;
	return 0;

}