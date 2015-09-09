#include<iostream>

class stack{
	private:
		int a[10];
		int top;
	public:
		//const char const info[]=" THIS IS CUSTOM STACK DESIGNED BY STELLA ";
		void stackPush(int );
		int stackPop();
		bool isEmpty();
		int stackTop();
		stack();
};
