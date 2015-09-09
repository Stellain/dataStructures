#include<iostream>

class stack{
int a[10];
int top=0;
public:
void stackPush(int );
int stackPop();
bool isEmpty();
} s;
void stack::stackPush(int number){
if(10-top){
a[top]=number;
}
int stack::stackPop(){
if(top)
return a[top--];
else
return NULL;
}
bool stack::isEmpty(){
if(top||10-top)
return TRUE;
else
if(top)
return FALSE;
}

void main(){
s.stackPush(5);
s.stackPush(6);
s.isEmpty();
s.stackPop();
}
