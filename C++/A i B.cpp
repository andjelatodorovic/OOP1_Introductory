/* Da se naprave klase A i B pri cemu B nasledjuje A.
A treba da sadrzi privatni element x, konstruktor kopije i operator dodele.
B treba da ima privatni clan y i da takodje sadrzi konstruktor kopije i operator dodele.
Ne moze preko set i get metoda, mora da se pozove konstruktor kopije osnovne klase u izvedenoj. */

class A {
  int x;
public:
  A() {};
  A(int _x) : x(_x) {};
  A(const A& temp) : x(temp.x) {};
  A& operator= (const A& temp) {
    if (this != &temp)
      x = temp.x;
    return *this;
  }
};

class B : public A {
  int y;
public:
  B() {};
  B(int _x, int _y) : A(_x), y(_y) {};
  B (const B& temp) : A(temp), y(temp.y) {};
  B& operator=(const B& temp) {
    if (this != &temp) {
      A::operator=(temp); // da se dodeli vrednost na x
      y = temp.y;
    }
    return *this;
  }
};

int main() {
  A a1(5);
  A a2 = a1;
  A a3;
  a3 = a2;
  B b1(4, 3);
  B b2 = b1;
  B b3;
  b3 = b2;
}