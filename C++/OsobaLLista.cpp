#include<iostream>
using namespace std;

class Osoba
{
private:
  char *ime;
  int god;
  static Osoba *prvi;
  Osoba *sledeci;
public:
  Osoba(char *_ime, int _god): ime(strcpy(new char[strlen(_ime)+1], _ime)), god(_god), sledeci(prvi) {
  prvi = this;
  }
  Osoba& operator=(const Osoba&);
  Osoba(const Osoba&);
  void pisi();
  static void Obilazak();
  ~Osoba();
};


Osoba *Osoba::prvi = nullptr;

Osoba::~Osoba(void)
{
  if (this == prvi) {
    printf("%s izbacen iz liste\n", this->ime);
    prvi = prvi->sledeci;
    return;
  }
  for (Osoba *ptr = prvi; ptr; ptr = ptr->sledeci){
    if (ptr->sledeci == this){
      printf("%s izbacen iz liste\n", this->ime);
      ptr->sledeci = this->sledeci;
      return;
      }
  }
}

Osoba::Osoba (const Osoba &druga): god(druga.god), ime(strcpy(new char[strlen(druga.ime)+1], druga.ime)), sledeci(prvi) {prvi=this;}

Osoba& Osoba::operator=(const Osoba &druga) {
  if (this!=&druga) {
    god=druga.god;
    delete []ime;
    ime=strcpy(new char[strlen(druga.ime)+1], druga.ime);
  }
  return *this;
}

void Osoba:: pisi() {
  printf("%s\n", ime);
}

void Osoba::Obilazak(){
  Osoba *ptr = Osoba::prvi;
  while (ptr){
    printf("%s ", ptr->ime);
    ptr = ptr->sledeci;
    printf("\n");
  }
  printf("\n");
}




void main() {
	Osoba a("1. Pera", 23), b("2. Mika", 22);
	Osoba *ptr;
	{
		Osoba c("3. Zika", 33);
		ptr = new Osoba("4. Laza", 44);
		//Osoba::Obilazak(); // 4 3 2 1
		Osoba("5. Kosta", 54).Obilazak(); //5 4 3 2 1
		// 5 izbacen iz liste
	} // 3 izbacen iz liste
//	Osoba::Obilazak(); // 4 2 1
	delete ptr; // 4 izbacen iz liste
//	Osoba::Obilazak(); // 2 1
/*
printf("\n\n---\n\n");
	int x = 5, *ip = &x;
++*ip; // ++x rezultat ovog izraza je l vrednost koja je dobila vrednost x = 6
(*ip)++; // rezultat je r-vrednost 5 a x je dobilo vrednost x =6;
printf("%d\n",(*ip)++*4); // IZLAZ: 20
*ip++=10; /* rezultat postfix ++ r-vrednost pokazivaca (stara), pokazivac je inkrementiran, dereferenciranjem pokazivaca dobija se l-vrednost (promenljiva x) kojoj se dodeljuje 10 */
/*printf("%d\n", x); // IZLAZ: 10
printf("%d\n", *ip);
*/
/*
int e, f, g;
e = (f=3, g=4); //zarez kao operatro. izvršava se prvo levi operand, zatim desni i vraæa se vrednost desnog operanda. Nije preporuèeno preklapati...
printf("\n%d\n\n", e);
int *paa;
int aAA = 5;
paa = &aAA;
printf("%d\n", *paa);*/
	system("pause");

}