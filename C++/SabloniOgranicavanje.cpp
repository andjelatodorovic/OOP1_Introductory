template <typename T> struct Ograniceni { };
template <> struct Ograniceni<float> { typedef float Tip; };
template <> struct Ograniceni<double> { typedef double Tip; };

template <typename T>
typename Ograniceni<T>::Tip // Tip rezultata funkcije Rastojanje
Rastojanje(T a1, T a2, T b1, T b2)
{
	T tmp1 = a1 - b1;
	T tmp2 = a2 - b2;
	return sqrt( tmp1*tmp1 + tmp2*tmp2 );
}

int main(){}