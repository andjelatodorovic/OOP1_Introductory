#include <iostream>
#include <string>
using namespace std;

template <class T>
T* kreiraj(){
	return new T();
}

template<> string* kreiraj<string>();

/*{
	return "bla bla";
}*/

template<class T>
T dupliraj(T x){
	return 2*x;
}

template <class T>
int dupliraj(int x){
	return x<<2;
}


int main(){
	//cout << *kreiraj<string>();
	cout << "radi" << endl;
	cout << dupliraj(1.5) << endl;
	cout << dupliraj<double>(2) << endl;
	system("pause");
	return 0;
}