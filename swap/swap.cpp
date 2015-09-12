#include"swap.h"
void swap(int *,int *);
int main()
{
	int num1,num2;
	std::cout<<"ENTER THE NUMBERS"<<std::endl;
	std::cin>>num1>>num2;
	swap(&num1,&num2);
	std::cout<<num1<<"       "<<num2<<std::endl;
	return 0;
}

void swap(int *nu1,int *nu2)
{
	*nu1=*nu1+*nu2;
	*nu2=*nu1-*nu2;
	*nu1=*nu1-*nu2;
}
