#include"number.h"
#include<iostream>

Number Number::add(const Number& other){};
Number Number::mul(const Number& other){};
void Number::print(){};

RealNumber::RealNumber(double num)
{
	num_dou=num;
}
RealNumber RealNumber::add(const RealNumber& other)
{
	RealNumber temp(0);
	temp.num_dou=num_dou+other.num_dou;
	return temp;
}
RealNumber RealNumber::mul(const RealNumber& other)
{
	RealNumber temp(0);
	temp.num_dou=num_dou*other.num_dou;
	return temp;
}
void RealNumber::print()
{
	std::cout<<num_dou<<std::endl;
}	

Integer::Integer(int num):RealNumber(0)
{
	num_int=num;
}
Integer Integer::add(const Integer& other)
{
	Integer temp(0);
	temp.num_int=num_int+other.num_int;
	return temp;
}
Integer Integer::mul(const Integer& other)
{
	Integer temp(0);
	temp.num_int=num_int*other.num_int;
	return temp;
}
void Integer::print()
{
	std::cout<<num_int<<std::endl;
}

ComplexNumber::ComplexNumber(double num1,double num2)
{
	re=num1;
	im=num2;
}
ComplexNumber ComplexNumber::add(const ComplexNumber& other)
{
	ComplexNumber temp(0,0);
	temp.re=re+other.re;
	temp.im=im+other.im;
	return temp;
}
ComplexNumber ComplexNumber::mul(const ComplexNumber& other)
{
	ComplexNumber temp(0,0);
	temp.re=re*other.re-im*other.im;
	temp.im=re*other.im+im*other.re;
	return temp;

}
void ComplexNumber::print()
{
	std::cout<<re<<"+j"<<im<<std::endl;
}
