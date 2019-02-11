/* Izvrsiti preklapanje operatora pre i postdekrementiranja za klasu koja
implementira razlomak (prijateljskim funkcijama i funkcijama clanice klase). */

class Razlomak {
  int p;
  int q;
public:
  Razlomak() {}
  Razlomak(int pp, int qq) : p(pp), q(qq) {}
  Razlomak& operator--() { // prefiksno
    p = p - q;
    return *this;
  }
  Razlomak operator--(int) {
    Razlomak temp(*this);
    p = p - q;
    return temp;
  }
};

int main() {
  Razlomak a(5, 4);
  a--;
  Razlomak b(2, 4);
  --b;
}