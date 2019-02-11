#include <iostream>

template<class T, T& ref>
class A{
	T &privRef;
public:
	A():privRef(ref){};
	void Print() const { std::cout<<privRef<<std::endl; }
};

//double a = 3; // Korektna definicija koja omogucava prenos a kao vrednosnog parametra preko reference

double a;

int main()
{
	//const double a = 3; /* - error C2971: 'A' : template parameter 'ref' : 'a' : a local variable cannot be used as a non-type argument */
	a=13;
	A<double,a> aO;
	aO.Print(); // Stampa 3
	a=4;
	aO.Print(); // Stampa 4
	system("pause");
	return 0;
}