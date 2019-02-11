#include <iostream>
using namespace std;

template<class T>
class Array{
	T* niz;
	unsigned size,capacity;
	void expand(){
		T* old = niz;
		capacity = capacity ? 2*capacity : 1;
		niz = new T[capacity];
		for (unsigned i=0; i<size; i++) niz[i] = old[i];
	}
public:
	Array<T>(unsigned _capacity = 256) : size(0),capacity(_capacity),niz(new T[_capacity]){}

	Array<T>(const Array<T>& other) : size(other.size),capacity(other.capacity),niz(new T[other.capacity]){
		for (unsigned i=0; i<size; i++) niz[i] = other.niz[i];
	}

	Array<T>& operator=(const Array<T>& other){
		if (this != &other){
			delete[]niz;
			size = other.size;
			capacity = other.capacity;
			for (unsigned i=0; i<size; i++) niz[i] = other.niz[i];
		}
		return *this;
	}

	virtual ~Array<T>(){
		delete[]niz;
	}

	T& operator[](unsigned x){
		return niz[x];
	}

	T operator[](unsigned x)const{
		return niz[x];
	}

	unsigned push_back(const T& obj){
		if (size==capacity) expand();
		niz[size++] = obj;
	}

	template<class W>
	Array<T>& operator*=(W x){
		for (unsigned i=0; i<size; i++) niz[i] *= x;
		return *this;
	}

	const Array<T> operator+(const Array<T>& other)const{
		return (Array<T>(*this)) += other;
	}
};

int main(){
	Array<int> a,b;
	a *= 3;
	return 0;
}
