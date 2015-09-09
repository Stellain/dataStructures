#include<iostream.h>
int a[10];
int top=0;
class stack{
void stackPush(int );
void stackPop();
void isEmpty();
} s;
void stackPush(int number){
if(10-top){
a[top]=number;
cout>>" Succefully inserted element into stack \n"
else
cout>>"Stack is Full \n";
}
void stackPop(){
if(top)
cout>>a[--top];
else
cout>>" Stack is empty \n";
}
void isEmpty(){
if(top||10-top)
cout>>"Stack is niether empty nor full \n";
else
if(top)
cout>>"Stack is full \n";
else
cout>>'Stack is empty \n";
}

void main(){
s.stackPush(5);
s.stackPush(6);
s.isEmpty();
s.stackPop();
}
