/* Napisati deo implementacije klase Complex - realni i imaginarni clan su double,
tako da sledece linije koda budu korektno prevedene i izvsene:
Comlex c1(2,3);
Complex c2 = c1 + 5;
c1 = 4 + c2; */

class Complex
{
  double real, imag;
public:
  Complex(double r, double i) : real(r), imag(i) {};

  // ne znam tacno kako se kompleksni broj sabira sa double
  Complex operator+(double a) {
    Complex temp(real, imag);
    temp.real += a;
    return temp;
  }

  Complex& operator=(const Complex& a) {
    if (this != &a) {
      real = a.real;
      imag = a.imag;
    }
    return *this;
  }

  friend Complex operator+(double, const Complex&);
};

Complex operator+(double a, const Complex& b) {
  return Complex(b.real + a, b.imag);
}

int main() {
  Complex c1(2, 3);
  Complex c2 = c1 + 5;
  c1 = 4 + c2;
}

