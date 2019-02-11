#include <iostream>
#include <string>
using namespace std;

void stampaj(int x, string s, void (*f)(int&, string&)){
	f(x,s);
	cout << x << " " << s;
}

void kvadrat(int& x,string& s){
	x = x*x;
	s = s + " vule";
}

template <class Tip, bool uporedi(const Tip&, const Tip&)>
void sortiraj(Tip* niz,int n){
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			if (!uporedi(niz[i],niz[j])){
				Tip tmp = niz[i];
				niz[i] = niz[j];
				niz[j] = tmp;
			}
		}
	}
}

//on bira ovu
bool poredjivac(const string& prvi, const string& drugi){
	return prvi.length() < drugi.length();
}

bool poredjivac(const char* prvi,const char* drugi){
	return strlen(prvi) > strlen(drugi);
}

int main(){
	string studenti[3] = {"Ivan","Vukasin","Lazar"};
	
	sortiraj<string,poredjivac>(studenti,3);

	cout << studenti[0] << " " << studenti[1] << " " << studenti[2] << endl;
	system("pause");
	return 0;
}