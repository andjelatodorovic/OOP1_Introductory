/* Implementirati klasu Osoba koja sadrzi kao privatne atribute ime_i_prezime tipa string i identifikacioni broj tipa unsigned. Za ovu klasu napisati konstruktor,
konstruktor kopije i operator dodele vrednosti. Iz klase Osoba izvedite klasu student koja sadrzi ime fakulteta tipa string i br. indeksa tipa unsigned kao dodatne
privatne atribute. Za klasu Student napisati konstruktor, konstruktor kopije i operator dodele vrednosti. */

#include <string>
using std::string;

class Osoba {
  const unsigned id = 0;
  string ime_i_prezime;
  static int newID; // recimo da se id automatski generise
public:
  Osoba() : id(newID++) {}
  Osoba(string i) : ime_i_prezime(i), id(newID++) {}
  Osoba(const Osoba& a) : ime_i_prezime(a.ime_i_prezime) {}
  Osoba& operator=(const Osoba& a) {
    if (this != &a)
      ime_i_prezime = a.ime_i_prezime;
    return *this;
  }
};

int Osoba::newID = 0;

class Student : public Osoba {
  string ime_fakulteta;
  unsigned br_indeksa;
public:
  Student() {}
  Student(string i, int b) : ime_fakulteta(i), br_indeksa(b) {}
  Student(const Student& a) : ime_fakulteta(a.ime_fakulteta), br_indeksa(a.br_indeksa) {}
  Student& operator=(const Student& a) {
    if (this != &a) {
      Osoba::operator=(a); // da se dodeli vrednost i na ime_i_prezime
      ime_fakulteta = a.ime_fakulteta;
      br_indeksa = a.br_indeksa;
    }
    return *this;
  }
};

int main() {
  Osoba a1, a2;
  Student b("Zoran", 12);
  Student c = b;
  Student d;
  d = b;
  d = d;
}