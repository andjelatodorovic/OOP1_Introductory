#include <iostream>
using namespace std;

template <class T,class U>
class GlupNiz{
	T t;
	U u;
};

//moze i ovako

template <class U>
class GlupNiz<int,U>{
	int t[100];
	U u;
};

template <class T,unsigned capacity>
class Stek{
	T niz[capacity];
	unsigned elements;
public:
	Stek():elements(0){}

	bool isFull(){
		return elements==capacity;
	}

	bool isEmpty(){
		return elements==0;
	}

	void push(const T& x){
		if (!isFull()){
			niz[elements++] = x;
		} else {
			//izbaguj zivot
		}
	}

	T pop(){
		if (!isEmpty()){
			return niz[--elements];
		} else {
			//izbaguj zivot
		}
	}
};

template <class T,unsigned capacity=256>
class KonvertibilanNiz{
	T niz[capacity];
public:
	KonvertibilanNiz(){}

	T operator [](unsigned x)const{
		return niz[x];
	}

	template<class U>
	KonvertibilanNiz(const KonvertibilanNiz<U,capacity>& other){
		for (unsigned i=0; i<capacity; i++){
			niz[i] = other[i];
		}
	}
};

template <class T>
class ObjectCounter{
	static unsigned count;
protected:
	ObjectCounter(){
		count++;
	}
	ObjectCounter(const ObjectCounter<T>& other){
		count++;
	}
	~ObjectCounter(){
		count--;
	}
public:
	static unsigned live(){
		return count;
	}
};

template <class T>
unsigned ObjectCounter<T>::count = 0;

class CountedTacka:public ObjectCounter<CountedTacka>{
public:
	int x,y;
	CountedTacka():x(0),y(0){}
	CountedTacka(int _x,int _y):x(_x),y(_y){}
};

CountedTacka a,b;

int main(){
	Stek<int,5> stek;
	CountedTacka c = b;
	cout << c.live(); //poziv staticke funkcije
	while (!stek.isFull()){
		stek.push(5);
		CountedTacka d;
		cout << c.live(); //poziv staticke funkcije
	}
	cout << c.live(); //poziv staticke funkcije
	while (!stek.isEmpty()){
		stek.pop();
	}

	KonvertibilanNiz<int*> ipniz;
	KonvertibilanNiz<void*> vpniz = ipniz;

	system("pause");
	return 0;
}