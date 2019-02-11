#include <iostream>
using namespace std;

class Animal{
public:
	int name;
	virtual int get_name(){
		return name;
	}
};

class Mammal: virtual public Animal{
public:
	int limbs;
	virtual int get_name(){
		return name+limbs;
	}
	virtual int get_limbs(){
		return limbs;
	}
};

class WingedAnimal: virtual public Animal{
public:
	int wings;
	virtual int get_name(){
		return name+wings;
	}
	virtual int get_wings(){
		return wings;
	}
};

class Bat: public WingedAnimal, public Mammal{
public:
	virtual int get_name(){
		return name+wings+limbs; //name is ambiguous
		return Mammal::name+wings+limbs;
	}
};

int main(){
	cout << sizeof(Animal) << endl;
	cout << sizeof(Mammal) << endl;
	cout << sizeof(WingedAnimal) << endl;
	cout << sizeof(Bat) << endl;
	system("pause");
	return 0;
}