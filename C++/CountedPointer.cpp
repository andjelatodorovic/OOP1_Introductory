#include <iostream>
#include <string>
using namespace std;

template <class T>
class CountedPointer{
	T* oP;
	int* cP;
public:
	CountedPointer<T>(T* _oP) : cP(new int(1)),oP(_oP){}
	CountedPointer<T>(const CountedPointer<T>& other) : oP(other.oP),cP(other.cP){
		++*cP;
	}
	T& operator*(){
		return *oP;
	}
	const T& operator*()const{
		return *oP;
	}
	~CountedPointer<T>(){
		if (--*cP == 0){
			delete cP;
			delete oP;
		}
	}
	T* operator->(){
		return oP;
	}
	const T* operator->()const{
		return oP;
	}
	operator void*(){
		return oP;
	}
	T*& operator--(){
		delete oP;
		delete cP;
		cP = new int(1);
		return --oP;
	}
	T* operator--(int){
		T* temp = oP;
		::operator--();
		return temp;
	}
};

int main(){
	CountedPointer<string> ptr = new string("aleksandar");
	reverse(ptr->begin(),ptr->end());
	cout << *ptr;
	system("pause");
	return 0;
}