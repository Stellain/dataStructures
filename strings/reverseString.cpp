/* To reverse the given stirng */

#include<iostream>

int main()
{
	std::string str,revStr=" ";
	int length,index=0;
	std::cout<<"ENTER THE STRING:\n";
	std::cin>>str;
	for(length=0;str[length]!='\0';length++);
	std::cout<<"\nLENGTH OF STRING IS: "<<length<<"\n";
	for(int i=length-1;i>=0;i--)
		revStr[index++]=str[i];
	revStr[index]='\0';
	std::cout<<"\nTHE REVERSE STRING IS : ";
	for(int i=0;i<index;i++)
		std::cout<<revStr[i];
	std::cout<<std::endl;
	return 0;
}
