#include<iostream>
#include <cstring>
using namespace std;

char s[20];
char t[20];
int ans;
int i,j, count=0;

class StringOperations {
public:
    void Operations()
{
cout << "s: ";
        cin >> s;
cout << "t: ";
    	cin >> t;   
 if (strlen(t)>strlen(s))
 {
 	ans=strlen(t)-strlen(s);
 	cout<<"Operations recquired are:"<<ans;
 }
 else {
 	for (int i = 0; i < strlen(s); ++i)
 	{
 		for (int j = 0; j < i; ++j)
 		{
 		if(s[i]!=t[i])	
 		count++;
 		}
 	}
 	cout<<"Operations recquired are:"<<count;
    }
}
};

int main()
{
    StringOperations op;
    op.Operations();
    return 0;
}