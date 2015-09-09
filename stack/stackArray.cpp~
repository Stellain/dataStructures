#include"stack.h"

void stack::stackPush(int number)
{
	if(10-top)
	{
		a[top]=number;
		top++;
	}
}

int stack::stackPop()
{
	if(top)
		return a[--top];
	else
		return 0;
}

bool stack::isEmpty()
{
	if(top)
		return false;
	else
		return true;
}
int stack::stackTop()
{
	if(top)
		return a[top-1];
	else 
		return 0;
}
stack::stack()
{
	top=0;
}


