/* Klasa refcount (iz prezentacija), treba da se preklope operator ++ i --,
da se napise RC_SmartPtr iz prezentacije koristeci refcount i pokazivac na T (genericka klasa). */

template <class T>
class SmartPtr {
  T* ptrToData; // pokazivac na podatak
  unsigned* ptrToCount; // Pokazivac na brojac referenci
  void Detach() {
    /* Dekrementiramo brojac referenci. Ako je njegova vrednost jednaka 0
    brisemo objekat i brojac referenci */
    if (!--*ptrToCount) {
      delete ptrToCount;
      delete ptrToData;
    }
  }
public:
  explicit SmartPtr() : ptrToData(0), ptrToCount(new unsigned(0)) {}
  explicit SmartPtr(T* pD, unsigned *pC) : ptrToData(pD), ptrToCount(pC) {}
  SmartPtr(T* pD) : ptrToData(pD), ptrToCount(new unsigned(1)) {}
  SmartPtr(const SmartPtr& other) : ptrToData(other.ptrToData), ptrToCount(other.ptrToCount) { ++*ptrToCount; }
  ~SmartPtr() { Detach();}
  
  SmartPtr& operator= (const SmartPtr& other){
    if (this != &other) {
      Detach();
      ptrToData = other.ptrToData;
      ++*(ptrToCount = other.ptrToCount);
    }
    return *this;
  }
  
  T* operator->() { return ptrToData; }
  const T* operator->() const { return ptrToData; }

  T& operator*() { return *ptrToData; }
  const T& operator*() const { return *ptrToData; }
  /* friend T& operator*(SmartPtr& p);
  friend const T& operator*(const SmartPtr& p); */

  // operator konverzije objekta tipa SmartPtr u vrednost logickog tipa
  operator bool() const { return ptrToData != NULL; }

  // operator implicitne konverzije
  template<typename U>
  operator SmartPtr<U>() const {
    ++*ptrToCount;
    return SmartPtr<U>(ptrToData, ptrToCount);
  }
};

/* T& operator*(SmartPtr& p) { return *p.ptrToData; }
const T& operator*(const SmartPtr& p) { return *p.ptrToData; } */