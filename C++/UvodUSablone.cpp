#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

template <class T> const T& maksimum(const T &a, const T &b) {
	return a>b ? a : b;
}

template <class T> class moja_klasa {
	private: 
		T vrednost;
		char * ime;
	public:
		moja_klasa(T, char*);
		void set_vrednost(T);
		T get_vrednost();
		void pisi();
//		moja_klasa(const &moja_klasa);
};

template <class T>
moja_klasa<T>::moja_klasa(T _vrednost, char* _ime): vrednost(_vrednost), ime(strcpy(new char[strlen(_ime)+1], _ime)){};
template <class T>void moja_klasa<T>::set_vrednost(T vrednost) {this->vrednost=vrednost;}
template <class T>void moja_klasa<T>::pisi(){ cout<<ime<<"("<<vrednost<<")"<<endl;}
template <class T>T moja_klasa<T>::get_vrednost() { return vrednost; }
void main() {
	int a=3, b=4;
	int c;
	c = maksimum(a,b);
	double d=3.22, e = 3.43;
	double f=maksimum(d, e);
	moja_klasa<int> n(3, "ds");
	moja_klasa<double> k(32.2, "fsd");
	printf("%d\n%.2f\n", c, f);
	moja_klasa<double> obj (3.435, "ime");
	moja_klasa<char*> obj2("prvi", "drugi");
	obj.pisi();
	obj2.pisi();
	system("pause");
}