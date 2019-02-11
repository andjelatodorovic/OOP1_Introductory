#include<iostream>
using namespace std;

class A {
private:
	virtual void f() {
		cout <<"Osnovna"<<endl;
	}
};

class B : public A {
public:
	void f() {
		cout <<"Izvedena"<<endl;
	}
};

void main () {
	A *pA = new A;
	B *pB = new B;
	pB->f();
	pA=pB;
	pA->f();
	//f je privatna u A i može joj se pristupiti samo iz klase...
}