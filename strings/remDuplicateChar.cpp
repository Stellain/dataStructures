/* To remove the duplicate charaters in the string */

#include<iostream>

int main()
{
	std::string str;
	int i;
	std::cout<<"ENTER THE STRING\n";
	std::cin>>str;
	for(i=1;str[i]!='\0';i++)
	{
		for(int j=i-1;j>=0;j--)
		{
			if(str[i]==str[j])
			{
				for(int k=i;str[k]!='\0';k++)
				{
					str[k]=str[k+1];
				}
				i--;
			}
		}
	}
	std::cout<<"THE MODIFIED STRING IS : ";
	for(int j=0;j<=i;j++)
		std::cout<<str[j];
	std::cout<<std::endl;
	return 0;
}
