#include"stack.h"
#include<ostream>
using namespace std;
int main()
{
	class stack s;
	s.stackPush(12);
	s.stackPush(5);
	s.stackPush(6);
	if(s.isEmpty())
		cout<<" Stack is empty \n";
	cout<<s.stackPop();
	cout<<s.stackTop();
	cout<<s.stackPop();
	return 0;
}
