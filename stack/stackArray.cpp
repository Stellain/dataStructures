#include<stack.h>

void stack::stackPush(int number){
if(10-top){
a[top]=number;
top++;
}
}
int stack::stackPop(){
if(top)
return a[top--];
else
return NULL;
}
bool stack::isEmpty(){
if(top||10-top)
return true;
else
if(top)
return false;
}


