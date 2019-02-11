/* Prekopirati vrednost jednog stringa u drugi pomocu funkcije
ali bez upotrebe operatora []. Stringovi se pamte kao niz karaktera
koji se zavrsava sa \0. Ovo je kao klasican C zadatak */

#include <iostream>

int strlen(const char* s) {
  int len = 0;
  while (*s) {
    len++;
    s++;
  }
  return len;
}

char* strcpy(char* d, const char* s) {
  char* p = d; // znaci ne menjaj d
  while (*s) {
      *p = *s;
      p++;
      s++;
  }
  *p = 0;
  return d;
}

int main() {
  char* a = "ASF";
  char* b = "ASSSS";
  std::cout << strcopy(a, b);
}