#include"stack.h"
#include<cstring>
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
const string stack::inf="DONE BY STELLA";
stack::stack()
{
	top=0;
	//strcpy(inf,"DONE BY STELLA");
}


