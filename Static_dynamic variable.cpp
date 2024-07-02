#include <iostream>
using namespace std;
class Person{
	int a;
public:
	void get(){
		cout<<"\n Enter any number:";
		cin>>a;
	}
	void show(){
		cout<<"\n Show Function";
		cout<<a;
	}
};
int main()
{
	Person p;
	p.get();
	p.show();
	Person *p1=new Person();
	p1->show();
	return 0;
}

Is used to dynamically declare 
Person *p1=new Person();
	p1->show();




Function inside teh class and function outside teh class:
#include <iostream>
using namespace std;
class Person{
	int a;
public:
	void get(){
		cout<<"\n Enter any number:";
		cin>>a;
	}
	void show()
};
void Person::Show(){
	{
		cout<<"\n Show Function";
		cout<<a;
	}
}
int main()
{
	Person p;
	p.get();
	p.show();
	return 0;
}
