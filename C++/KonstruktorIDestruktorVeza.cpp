#include <iostream>
#include <string>
using namespace std;

class Osnovna{
public:
	Osnovna(){
		//cout << "Konstruktor Osnovna" << endl;
		//this->VirtFun();
	}
	virtual void VirtFun()const{
		cout << "Virtual Fun Osnovna" << endl;
	}
	void VF_Poziv()const{
		//this->VirtFun();
	}
	virtual ~Osnovna(){
		//cout << "Destruktor Osnovna" << endl;
		//this->VirtFun();
	}
};

class Izvedena: public Osnovna{
public:
	Izvedena(){
		//cout << "Konstruktor Izvedena" << endl;
	}
	virtual void VirtFun()const{
		Osnovna::VirtFun();
		cout << "Virtual Fun Izvedena" << endl;
	}
	virtual ~Izvedena(){
		//cout << "Destruktor Izvedena" << endl;
	}
};

int main(){
	Osnovna *ptr = new Izvedena();
	ptr->VirtFun();
	delete ptr;

	system("pause");
	return 0;
}