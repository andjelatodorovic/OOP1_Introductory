/* Klasa MyFloat, ima privatni podatak float num.
Treba da se napisu metode koje omogucavaju sledece linije koda:
MyFloat x = 3.5;
MyFloat y = x + 3.2;
float z = 3.4 + y; */

class MyFloat {
  float num;
public:
  MyFloat(float _num) : num(_num) {};
  
  MyFloat& operator=(MyFloat temp) {
    if (this != &temp)
      num = temp.num;
    return *this;
  }
  
  float operator+(float a) { return num + a; } // x + 3.2
  friend float operator+(float, MyFloat); // 3.4 + y
};

float operator+(float a, MyFloat b) { return a + b.num; }

int main() {
  MyFloat x = 3.5;
  MyFloat y = x + 3.2;
  float z = 3.4 + y;
}