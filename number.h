#ifndef NUMBER_H
#define NUMBER_H 

class Number
{
public:
	virtual	void print();
	Number add(const Number& other);
	Number mul(const Number& other);
};
class RealNumber:public Number
{
public:
	RealNumber(double);
	virtual void print();
	RealNumber add(const RealNumber& other);
	RealNumber mul(const RealNumber& other);
	double num_dou;
};
class Integer:public RealNumber
{
public:
	Integer(int);
	virtual void print();
	Integer add(const Integer& other);
	Integer mul(const Integer& other);
	int num_int;
};
class ComplexNumber:public Number
{
public:
	ComplexNumber(double,double);
	virtual void print();
	ComplexNumber add(const ComplexNumber& other);
	ComplexNumber mul(const ComplexNumber& other);
	double re;
	double im;
};
#endif
