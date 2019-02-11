/* Da se napravi sablon Vektor tako da se unosi samo tip, privatni clanovi su mu niz tog tipa i duzina niza. Niz treba da se kreira na heap-u.
Konstruktor kao argument treba da sadrzi int duzina i da kreira taj niz. Napraviti specijalizaciju tog sablona za tip char. */

#include <iostream>

template <class T>
class Vektor {
private:
  T* niz;
  int duzina;
public:
  Vektor(int d) : duzina(d), niz(new T[d]) {};
  ~Vektor() { delete[]niz; niz = 0; };
};

template<>
class Vektor<char> {
private:
  char *niz;
  int duzina;
public:
  Vektor(int d) : duzina(d), string(new char[d + 1]) {};
  ~Vektor() { delete[] string; string = 0; };
};

int main() {
  Vektor<int> a(12);
  Vektor<char> ime(7);
}
