#include <iostream>
using namespace std;
class Person
{
public:
	Person(){
		cout<<"\n Default constructor";
	}
	Person( int x){
		cout<<"\n Parameterized constructor";
	}
	Person(int x,int y){
		cout<<"\n Parameterized constructor";
	}
	
};
int main()
{
	Person p1;
	Person p2(7);
	Person p3(5,6);
	Person p4=p1;   //Copy constructor 
	return 0;
}