#include <iostream>
using namespace std;

class Deda{
public:
	virtual ~Deda(){
		cout << "Deda destruktor" << endl;
	}
};

class Otac : public Deda{
public:
	~Otac(){
		//implicitno virtual
		cout << "Otac destruktor" << endl;
	}
};

class Sin : public Otac{
public:
	~Sin(){
		//ponovo implicitno virtual
		cout << "Sin destruktor" << endl;
	}
};

int main(){
	Otac* cale = new Sin();
	delete cale;

	system("pause");
	return 0;
}