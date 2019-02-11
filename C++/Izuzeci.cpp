#include <iostream>
using namespace std;

class Dummy{
public:
	Dummy(){
		cout << "Dummy default constructor" << endl;
	}
	Dummy(const Dummy &x){
		cout << "Dummy copy constructor" << endl;
	}
};

void f(){
	const Dummy d;
	cout << "|";
	throw d;
}

void g(Dummy& d){
	cout << "g!";
}

int main(){
	try{
		f();
	} catch (Dummy){
		//g(e);
		cout << "Dummy caught" << endl;
		//Dummy d=e;
		
	}
	system("pause");
	return 0;
	return 0;
}
