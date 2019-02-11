/* Napisati implementaciju sablona klase Array kojim se implementira dinamicki niz u slobodnoj memoriji.
Argument sablona je tip elemenata. Napisati konstruktor, destruktor, konstruktor kopije i preklopiti
operatore dodele vrednosti (=) i indeksiranja ([]). Preklapanjem operator indeksiranja dozvoliti pristup
elementima promenljivih i konstantnih objekata tipa Array. */

#include <iostream>

template<class T>
class Array {
  T* niz;
  int len;
public:
  Array() : niz(0) {}
  Array(int l) : niz(new T[l]), len(l) {}
  ~Array() { delete[] niz; niz = 0; }
  Array(const Array& a) {
    delete[] niz;
    len = a.len;
    niz = new T[len];
    for (int i = 0; i < len; ++i)
      niz[i] = a.niz[i];
  }
  Array& operator=(const Array& a) {
    if (this != &a) {
      delete[] niz;
      len = a.len;
      niz = new T[len];
      for (int i = 0; i < len; ++i)
        niz[i] = a.niz[i];
    }
    return *this;
  }
  // [] i -> moraju da budu preklopljen kao clanice a * moze i kao friend
  T& operator[](unsigned Idx) { return niz[Idx]; }
  const T& operator [](unsigned Idx) const { return niz[Idx]; }
};

int main() {
  Array<int> a(3);
  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  std::cout << a[0] << " " << a[1] << " " << a[2];
  Array<int> b = a;
  Array<int> c;
  c = b;
}