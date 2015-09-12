#include<iostream>

int greatest(int ,int );

int main()
{
	int num1, num2, great;
	std::cout<<"ENTER THE NUMBER"<<std::endl;
	std::cin>>num1>>num2;
	great=greatest(num1,num2);
	std::cout<<great<<std::endl;
	return 0;
}

int greatest(int num1,int num2)
{
	int x,diff;
	diff=num1-num2;
	x=diff>>31;
	return num1+(x*diff);
}

