/* Implementirati sablon klase Array.
Za ovaj sablon napisati konstuktor, desktuktor, konsktuktor kopije, operator dodele vrednosti i operator pristupa elementima [].
Ovaj operator implementirati tako da moze da pristupa i konstantim objektima. Implementirati sablon klase Stek privatnim nasledjivanjem sablona klase Array.*/

#include <iostream>

template<class T>
class Array {
protected:
  T* niz;
  int kap;
public:
  Array() : niz(0) {}
  Array(int k) : kap(k), niz(new T[k]) {};
  ~Array() { delete[] niz; niz = 0; }
  Array(const Array& a) {
    delete[] niz;
    kap = a.kap;
    niz = new T[kap];
    for (int i = 0; i < kap; ++i)
      niz[i] = a.niz[i];
  }
  Array& operator=(const Array& a) {
    if (this != &a) {
      delete[] niz;
      kap = a.kap;
      niz = new T[kap];
      for (int i = 0; i < kap; ++i)
        niz[i] = a.niz[i];
    }
    return *this;
  }
  // [] i -> moraju da budu preklopljen kao clanice a * moze i kao friend
  T& operator[](unsigned Idx) { return niz[Idx]; }
  const T& operator[](unsigned Idx) const { return niz[Idx]; }
};

template <class T>
class Stack : private Array<T>/* sve isto ko i pre samo sto navodimo argumente sablona Array */ {
  int vrh;
public:
  Stack(int k = 100) : Array(k)/*inicijalizujemo kapacitet i niz*/, vrh(0) {};
  Stack(const Stack& temp) : Array(temp), vrh(temp.vrh) {};
  Stack& operator= (const Stack &temp) {
    if (this != &temp) {
      Array::operator=(temp); /* ovim sredjujemo kapacitet i niz u osnovnoj klasi */
      vrh = temp.vrh; /* ali ono sto je iz ove klase moramo rucno */
    }
    return *this;
  }
  T pop() { return niz[--vrh]; }
  void push(const T& temp) { niz[vrh++] = temp; }
};

int main() {
  Stack<int> Stek(5);
  Stek.push(32);
  Stek.push(44);
  Stek.push(666);
  Stek.push(-333);
  Stack<int> Stek2;
  Stek2 = Stek;
  Stack<int> stek3;
  stek3.push(2);
  stek3.push(4);
  stek3.pop();
  stek3.pop();
}