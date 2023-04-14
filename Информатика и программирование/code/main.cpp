#include <iostream>
using namespace std;

#define SIZE 10
class stack
{
	char *stck;
	int top, size;
public:
	stack(int s);
	~stack();
	void push(char ch);
	char pop();
};

stack::stack(int s)
{
	cout << "Constructor works" << endl;
	top = 0;
	stck = new char[s];
	size = s;
	if(!stck)
	{
		cout << "Segfault" << endl;
		exit(1);
	}
}
stack::~stack()
{
	cout << "Destuctor works" << endl;
	delete stck; //delete *stck; //delete stck[]; //delete []stck;
}
void stack::push(char ch)
{
	if(top==SIZE)
	{
		cout << "Stack is full" << endl;
		return;
	}
	stck[top] = ch;
	top++;
}
char stack::pop()
{
	if(!top)
	{
		cout << "Stack is empty" << endl;
		return 0;
	}
	//
	top--;
	return stck[top];
}


int main()
{
	stack s1,s2;
	int i;
	s1.push('a');
	s2.push('x');
	s1.push('g');
	s2.push('v');
	s1.push('h');
	s2.push('l');

	cout << s1.pop() << " " << s2.pop() << s2.pop() << s2.pop() << s2.pop() << endl;
}