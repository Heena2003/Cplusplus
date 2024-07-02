//Reverse a string using stack

// str="ashish"
// for( inti=0;1<count;++i){
//     push(str[i])
// }
// revstr[i]=pop()


#include<iostream>
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
		cout<<ele<<"is pushed";
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
    int ele;
	if(isempty())
	{
		cout<<"Stack is Empty";
	
	}
	else{
		ele=stack[top];
		--top;
		cout<<ele<<"is popped";
	}
return ele;
}

int peek(){
    if(isempty()){
        cout<<"stack is empty";
    }
    else{
    cout<<stack[top];
}
return 0;
}

void traverse(){
    if(isempty()){
        cout<<"Stack is empty";
    }
    else{
        cout<<"Stack Element are:";
        for(int i=0; i<=top;++i){
            cout<<stack[i]<<" ";
            }
        cout<<"\n";
    }
}

int main(){
     int choice;
     int ele;
     while (true){
     cout<<"\nOperation to be performed:\n";
     cout<<"1. Push\n";
     cout<<"2. Pop\n";
     cout<<"3. Peek\n";
     cout<<"4. Traverse\n";
     cout<<"5. Exit\n";
     cout<<"Enter your choice:\n";
     cin>>choice;
     
     switch (choice){
         case 1: 
             cout<<"Enter the element to push:";
             cin>>ele;
             push(ele);
            break;
         case 2:
             pop();
             break;
         case 3:
             peek();
             break;
         case 4:
             traverse();
             break;
         case 5:
             cout<<"Exit";
         return 0;
        }
     }
    return 0;
}