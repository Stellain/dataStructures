#include<stack.h>

void main()
{
	stack s,s1,s2;
	s.stackPush(12);
	s.stackPush(5);
	s.stackPush(6);
	if(s.isEmpty())
		cout<<" Stack is empty \n";
	cout<<s.stackPop();
	cout<<s.top();
	cout<<s.stackPop();
}
