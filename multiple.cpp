#include<iostream>
using namespace std;
class A{
    public:
    void ishowA(){
        cout<<"I am class A\n";
    }
};
class B{
    public:
    void ishowB(){
        cout<<"I am class B\n";
    }
};
class C:public A, public B{
    public:
    void ishowC(){
        cout<<"I am class C";
    }
};

int main(){
    C obj;
    obj.ishowA();
    obj.ishowB();
    return 0;
}