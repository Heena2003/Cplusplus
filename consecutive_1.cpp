#include <iostream>
using namespace std;
int main() {
    int count=0;
    int max=0;
    int arr[]={1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1};
    for(int i=0; i<sizeof(arr);++i){
        if(arr[i]==1)
        {
            count++;
        }
        else{
            count=0;
        }
        if(max<count){
            max=count;
        }
    } cout<<max;

    return 0;
};