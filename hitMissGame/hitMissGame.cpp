/* THE GAME OF MASTER MIND */

#include<iostream>
#include<cstdlib>

int main()
{
	int computer[4],user[4],i,hit=0,miss=0;
	for(i=0;i<4;i++)
	{
		computer[i]=rand() % 4;
	}
	while(hit!=4){	
		std::cout<<"ENTER THE ARRANGEMENT \n0-RED\n1-YELLOW\n2-GREEN\n3-BLUE\n";
		for(i=0;i<4;i++)
		{
			std::cin>>user[i];
		}
	/*for(i=0;i<4;i++)
	{
		std::cout<<computer[i]<<"\t"<<user[i]<<"\n";
	}*/	
	
	
		hit=miss=0;
		for(i=0;i<4;i++)
		{
			if(user[i]==computer[i])
			{
				std::cout<<"HIT\n";
				hit++;
			}
			else
			{
				std::cout<<"MISS\n";	
				miss++;
			}
		}
		std::cout<<"HIT: "<<hit<<"\nMISS: "<<miss<<"\n";
	}
	return 0;
}
