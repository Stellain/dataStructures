#include"stack.h"
#include<ostream>
#include<cstring>
using namespace std;
int main()
{
	class stack s;
	s.stackPush(12);
	s.stackPush(5);
	s.stackPush(6);
	if(s.isEmpty())
		cout<<" Stack is empty \n";
	cout<<s.stackPop()<<endl;
	cout<<s.stackTop()<<endl;
	cout<<s.stackPop()<<endl;
	for(int i=0;i<strlen(s.inf);cout<<s.inf[i++]);
	return 0;
}
