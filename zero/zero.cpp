#include<iostream>

int zero(int );

int main()
{
	int x,y;
	std::cout<<"ENTER THE NUMBER "<<std::endl;
	std::cin>>x;
	y=zero(x);
	std::cout<<"NO.OF ZERO AT THE END ARE:"<<y;
	return 0;
}

int zero(int x)
{
	int sum=0;
	sum=sum+(x/5);
	x=x/5;
	return sum;
}
