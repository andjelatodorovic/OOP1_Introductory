template <class T>
class Niz{
	int size;
	T* p;
public:
	Niz(int s=16):size(s),p(new T[s]){}
	Niz(const Niz& d):size(d.size),p(new T[size]){
		for (int i=0; i<size; i++) p[i] = d.p[i];
	}
	Niz<T>& operator=(const Niz<T>& d){
		if (this != &d){
			delete[]p;
			size = d.size;
			p = new T[size];
			for (int i=0; i<size; i++) p[i] = d.p[i];
		}
		return *this;
	}
	T operator[](int x)const{
		return p[x];
	}
	T& operator[](int x){
		return p[x];
	}
	template <class U>
	operator Niz<U>()const{
		Niz<U> novi = size;
		for (int i=0; i<size; i++) novi[i] = (*this)[i];
		return novi;
	}
	~Niz(){
		delete[]p;
	}
};

int main(){
	Niz<int> a = 3;
	Niz<int> b = a;
	Niz<double> c;
	c = a;
}
