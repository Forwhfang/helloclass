#include"number.h"
#include<iostream>

void Number::print(){};

RealNumber::RealNumber(double num)
{
	num_dou=num;
}
RealNumber RealNumber::operator+(const RealNumber& other)
{
	RealNumber temp(0);
	temp.num_dou=num_dou+other.num_dou;
	return temp;
}
RealNumber RealNumber::operator*(const RealNumber& other)
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
Integer Integer::operator+(const Integer& other)
{
	Integer temp(0);
	temp.num_int=num_int+other.num_int;
	return temp;
}
Integer Integer::operator*(const Integer& other)
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
ComplexNumber ComplexNumber::operator+(const ComplexNumber& other)
{
	ComplexNumber temp(0,0);
	temp.re=re+other.re;
	temp.im=im+other.im;
	return temp;
}
ComplexNumber ComplexNumber::operator*(const ComplexNumber& other)
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
