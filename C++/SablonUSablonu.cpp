#include <string>
using namespace std;

template<class Scalar>
class Complex {
	Scalar re, im;
public:
	Complex(Scalar newRe, Scalar newIm):re(newRe), im(newIm){}
	Scalar Re()const{return re;}
	Scalar Im()const{return im;}
	//Definicija sablona funkcije clanice sablona klase unutar sablona
	//template<class OtherScalar>
	//Complex(const Complex<OtherScalar>& c) : re(c.re) , im(c.im) { }
	template<class OtherScalar>
	Complex(const Complex<OtherScalar>&); //deklaracija sablona funkcije clanice sablona klase
	// ...
};

template <class Scalar>
template <class OtherScalar>
Complex<Scalar>::Complex(const Complex<OtherScalar>& c) : re(c.Re()) , im(c.Im()) { }

int main(){
	Complex<double> a(1.5, 3.5);
	//Complex<string> b = a; //ne radi
	Complex<int> b = a; //radi
}