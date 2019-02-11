/* Napraviti smart pointer koji nema reference counter.
Ima pokazivac na T, pre i postfiksno inkrementiranje, operator*, operator->
i da se pokazivac konvertuje u void* (ne smart pointer nego unutar njega onaj pokazivac sto ukazuje na objekat tipa T)
-- Treba da se zna razlika izmedju ovih operatora i svi sitni detalji vezani za njih */

// kakvo pa sad void*

template<class T>
class SmartPointer{
  T* ptr;
public:
  SmartPointer(T* p = NULL) : ptr(p) {}
  T* operator->() const { return ptr; }
  T& operator*() const { return *ptr; }
  T& operator++() { // prefiksno
    (*ptr)++;
    return *this;
  }
  T operator++(int) {
    T temp = *ptr;
    (*ptr)++;
    return *ptr;
  }
  virtual ~SmartPointer() { delete ptr;}
};