#include <iostream>
#include <string>
using namespace std;

class Osoba{
	string ime;
	static Osoba *prvi;
	Osoba *sledeci;
public:
	Osoba(string _ime):ime(_ime),sledeci(prvi){
		prvi = this;
	}
	Osoba(const Osoba& other):ime(other.ime),sledeci(prvi){
		prvi = this;
	}
	Osoba& operator=(const Osoba& other){
		if (this != &other){
			ime = other.ime;
		}
		return *this;
	}
	inline static void Obilazak(){
		Osoba *ptr = prvi;
		while (ptr){
			cout << ptr->ime << endl;
			ptr = ptr->sledeci;
		}
	}
	~Osoba(){
		if (this == prvi){
			cout << ime << " izbacen!" << endl;
			prvi = prvi->sledeci;
			return;
		}
		for (Osoba *ptr = prvi; ptr; ptr = ptr->sledeci){
			if (ptr->sledeci == this){
				cout << ime << " izbacen!" << endl;
				ptr->sledeci = this->sledeci;
				return;
			}
		}
	}
};

Osoba* Osoba::prvi = 0;

int main(){
	Osoba a("1"),b("2");
	Osoba *ptr;
	{
		Osoba c("3");
		ptr = new Osoba("4");
		Osoba::Obilazak(); // 4 3 2 1
		Osoba("5").Obilazak(); //5 4 3 2 1
		// 5 izbacen iz liste
	} // 3 izbacen iz liste
	Osoba::Obilazak(); // 4 2 1
	delete ptr; // 4 izbacen iz liste
	Osoba::Obilazak(); // 2 1
	while (1);
} // 2 izbacen iz liste
// 1 izbacen iz liste