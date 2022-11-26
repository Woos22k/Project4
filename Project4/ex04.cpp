#include <iostream>
using namespace std;

class Employee {
	string name;
	int salary;
public:
	Employee(string name = "", int s = 0) :name(name), salary(s) {
		cout << "이름: " << name << endl;
		cout << "월급: " << salary << endl;
	}
	void setemp(string name, int s) {
		this->name = name;
		this->salary = s;
	}
	Employee getemp() {
		return *this;
	}
	int computeSalary() {
		return salary;
	}
};
class Manager :public Employee {
private:
	int bonus = 100;
public:
	Manager(string name = "", int s = 0) :Employee(name, s) {
		cout << "보너스: " << bonus << endl;
		cout << "전체 급여: " << computeSalary() << endl;
	}
	void setM(string name, int s) {
		Employee::setemp(name, s);
	}
	Employee getM() {
		Employee::getemp();
	}
	int computeSalary() {
		int s = Employee::computeSalary();
		return s + bonus;
	}
};
int main() {
	Manager m{ "김철수",200 };

}