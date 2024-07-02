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
class C:public B{
    public:
    void ishowC(){
        cout<<"I am class C";
    }
};

int main(){
    C obj2;
    obj2.ishowA();
    
    return 0;
}