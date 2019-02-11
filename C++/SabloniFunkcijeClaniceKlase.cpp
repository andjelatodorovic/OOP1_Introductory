#include <iostream>
#include <string>
using namespace std;

class Student{
	int brIndeksa;
	string ime;
public:
	//nebitni konstruktor
	Student(int _=0,string __=""):brIndeksa(_),ime(__){}

	//bitno (x je jusles)
	string toString(int x){
		return to_string(brIndeksa) + " " + ime;
	}
};

template<class Tip, class TipRezultata, class TipArgumenta,
	TipRezultata (Tip::*pokNaFun)(TipArgumenta)>
void probajDaStampas(Tip &objekat, TipArgumenta y){
	cout << (objekat.*pokNaFun)(y) << endl;
}

template<class Tip>
void probajDaStampas(Tip& objekat){
	cout << objekat.toString(0) << endl;
}

int main(){
	Student vule(2,"Vukasin Stanojevic");

	//string(Student::*ptr)(int) = &Student::toString;

	probajDaStampas<Student, string, int, &Student::toString>(vule,4);

	probajDaStampas<Student>(vule);

	system("pause");
	return 0;
}


/*
class A{
	int x;
	double dx;
public:
	A(int _x = 0):x(_x){}
	int VrednostX() const { return x;}
	double VrednosDx() const { return dx;}
	void PostaviX(int _x) { x = _x;}
	void PostaviDx(double _dx) { x = _dx;}
	int PostaviIVratiX(int _x) { x = _x; return x;}
};

template<typename Tip, typename RezType, typename ArgType,
	RezType (Tip::*ptrToMetod)(ArgType)>
void Pozovi(Tip &object, ArgType x){
	(object.*ptrToMetod)(x);
}

void main(){
	A a;
	void (A::*ptr)(int) = &A::PostaviX; // Definisanje pokazivaca na funkciju clanicu klase A
	(a.*ptr)(2); // Poziv clanice nad objektom klase a preko pokazivaca a.x = 2;
	Pozovi<A, void, int, &A::PostaviX>(a,4); // a.x = 4;
	Pozovi<A, int, int, &A::PostaviIVratiX>(a,5); // a.x = 5;

}
*/