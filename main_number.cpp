#include"number.h"
#include<iostream>

int main()
{
	Number* number;

	RealNumber obj1(3.33);
	RealNumber obj2(5.25);
	RealNumber obj3(0);
	number=&obj3;
	obj3=obj1+obj2;
	number->print();
	obj3=obj1*obj2;
	number->print();
	std::cout<<std::endl;

	Integer obj4(5);
	Integer obj5(9);
	Integer obj6(0);
	number=&obj6;
	obj6=obj4+obj5;
	number->print();
	obj6=obj4*obj5;
	number->print();
	std::cout<<std::endl;

	ComplexNumber obj7(3,7);
	ComplexNumber obj8(4,6);
	ComplexNumber obj9(0,0);
	number=&obj9;
	obj9=obj7+obj8;
	number->print();
	obj9=obj7*obj8;
	number->print();
	std::cout<<std::endl;
	return 0;
}
