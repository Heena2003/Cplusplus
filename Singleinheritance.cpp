#include<iostream>
using namespace std;
class A{
    public:
    void ishowA(){
        cout<<"I am class A";
    }
};
class B:public A{
    public:
    void ishowB(){
        cout<<"I am class B";
    }
};
int main(){
    B obj;
    obj.ishowA();
    return 0;
}