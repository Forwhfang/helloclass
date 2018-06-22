#ifndef NUMBER_H
#define NUMBER_H 

class Number
{
public:
	virtual	void print();
};
class RealNumber:public Number
{
public:
	RealNumber(double);
	virtual void print();
	RealNumber operator+(const RealNumber& other);
	RealNumber operator*(const RealNumber& other);
	double num_dou;
};
class Integer:public RealNumber
{
public:
	Integer(int);
	virtual void print();
	Integer operator+(const Integer& other);
	Integer operator*(const Integer& other);
	int num_int;
};
class ComplexNumber:public Number
{
public:
	ComplexNumber(double,double);
	virtual void print();
	ComplexNumber operator+(const ComplexNumber& other);
	ComplexNumber operator*(const ComplexNumber& other);
	double re;
	double im;
};
#endif
