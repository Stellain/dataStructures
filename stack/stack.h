#include<iostream>
#include<string>

class stack{
	private:
		int a[10];
		int top;
	public:
		static const std::string inf;
		void stackPush(int );
		int stackPop();
		bool isEmpty();
		int stackTop();
		stack();
};
