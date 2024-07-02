#include <iostraem>
using namespace std;


#define Capacity 10
int stack[Capacity];
int top=-1;

int isfull(){
	if(top==Capacity-1){
		return 1;
	}
	else{
		return 0;
	}
}

void push(int ele){
	if(isfull())
	{
		cout<<"Stack is full";
	}
	else{
		++top;
		stack[top]=ele;
		cou<<ele<<"is pushed";
	}
}

int isempty(){
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}

int pop(){
	if(isempty())
	{
		cout<<"Stack is Empty";
	}
	else{
		ele=stack[top];
		--top;
		cou<<ele<<"is popped";
	}
	return ele;
}