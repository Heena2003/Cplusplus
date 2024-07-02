#include<iostream>
using namespace std;

class A{
    public:
    void ishowA(){
        cout<<"I am class A\n";
    }
};
class B:public A{
    public:
    void ishowB(){
        cout<<"I am class B\n";
    }
};
class C:public A{
    public:
    void ishowC(){
        cout<<"I am class C\n";
    }
};
class D:public B,C{
    public:
    void ishowD(){
        cout<<"I am class D\n";
    }
};
int main(){
    D obj;
    
}