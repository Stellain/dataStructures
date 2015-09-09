#include<iostream>

class stack{
	private:
		int a[10];
		int top;
	public:
		char inf[15];
		void stackPush(int );
		int stackPop();
		bool isEmpty();
		int stackTop();
		stack();
};
