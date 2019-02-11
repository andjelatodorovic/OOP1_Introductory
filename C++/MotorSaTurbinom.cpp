#include <iostream>

class Motor{
	int brojSatiRada;
	double zamorTurbine;
public:
	Motor():brojSatiRada(0),zamorTurbine(0){}
	Motor(int a,double b):brojSatiRada(a),zamorTurbine(b){}
	virtual double getZamor()const{
		return brojSatiRada * zamorTurbine;
	}
	virtual ~Motor(){}
	bool operator <(const Motor& d)const{
		return getZamor() < d.getZamor();
	}
	bool operator==(const Motor& d)const{
		return !(*this < d || d < *this);
	}
	bool operator >(const Motor& d)const{
		return d < *this;
	}
	bool operator<=(const Motor& d)const{
		return !(d < *this);
	}
	bool operator>=(const Motor& d)const{
		return !(*this < d);
	}
};

class MotorSaTurbinom: public Motor{
	double dodatno;
public:
	MotorSaTurbinom():Motor(),dodatno(0){}
	MotorSaTurbinom(int a,double b,double c):Motor(a,b),dodatno(c){}
	virtual double getZamor()const{
		return Motor::getZamor() + dodatno; //e ovde sam ja stavio tacku
	}
};