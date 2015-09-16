#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	int xnum=0,anum=1;
	cout<<"  ENTER 2 NUMBERS"<<endl;
	cin>>num1>>num2;
	while(anum)
	{	
		xnum=num1 ^ num2;
		anum=num1 & num2;
		num2=anum<<1;
		num1=xnum;
	}
	cout<<endl<<xnum;
	return 0;
}	
		
