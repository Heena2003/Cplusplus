#include <iostream>
using namespace std;

class BankAccount
{
    public: 
    int acc_balance = 1000;
    char cust_name[20];
    char cust_city[20];
    int amt;
    int cust_acc_no;
    int cust_mob;

public:
    void inputData(){
        cout << "Enter Customer name: ";
        cin >> cust_name;
        cout << "Enter Customer's city: ";
        cin >> cust_city;
        cout << "Enter Customer's Account No: ";
        cin >> cust_acc_no;
        cout << "Enter Customer's mobile No: ";
        cin >> cust_mob;
    }

    void show_details(){
        cout << "\n Customer name: " << cust_name;
        cout << "\n Customer's mobile No.: " << cust_mob;
        cout << "\n Customer's city: " << cust_city;
        cout << "\n Customer's Account No.: " << cust_acc_no;
         cout << "\nAccount's balance: " << acc_balance;
    }

    
};

    class SavingAccount: public BankAccount
    {
public:        
void Deposit(){
        cout << "Enter the amount: ";
        cin >> amt;
        acc_balance += amt;
        cout << "Account's balance: " << acc_balance;
    }
    void Withdraw(){
        cout << "Enter the amount: ";
        cin >> amt;
        if (amt > acc_balance) {
            cout << "Insufficient balance!";
        } else {
            acc_balance -= amt;
            cout << "Account's balance: " << acc_balance;
        }
    }
    };

    class CurrentAccount: public BankAccount
    {
public:        
    void Deposit(){
        cout << "Enter the amount: ";
        cin >> amt;
        acc_balance += amt;
        cout << "Account's balance: " << acc_balance;
    }
    void Withdraw(){
        cout << "Enter the amount: ";
        cin >> amt;
        if (amt > acc_balance) {
            cout << "Insufficient balance!";
        } else {
            acc_balance -= amt;
            cout << "Account's balance: " << acc_balance;
        }
    }
    };

int main()
{
    SavingAccount s;
    CurrentAccount c;
    BankAccount b;
    int n,x;
    while(true)
    {
        cout << "\n For Current Account Enter 1  ";
        cout << "\n For Saving Account Enter 2";
        cout << "\n To Exit Enter 3 \n";
        cin >> x;
        if(x==1)
        {
            cout << "\n For Current Account";
            cout << "\n1. Input Data";
            cout << "\n2. Withdraw";
            cout << "\n3. Show Details";
            cout << "\n4. Deposit";
            cout << "\n5. Exit";
            cout << "\n Select any Choice: ";
            cin >> n;
                switch(n){
                    case 1: c.inputData();
                        break;
                    case 2: c.Withdraw();
                        break;
                    case 3: c.show_details();
                        break;
                    case 4: c.Deposit();
                        break;
                    case 5: exit(0);
        }
    }
    else if(x==2)
    {
            cout << "\n For Saving Account";
            cout << "\n1. Input Data";
            cout << "\n2. Withdraw";
            cout << "\n3. Show Details";
            cout << "\n4. Deposit";
            cout << "\n5. Exit";
            cout << "\n Select any Choice: ";
            cin >> n;
                switch(n){
                    case 1: s.inputData();
                        break;
                    case 2: s.Withdraw();
                        break;
                    case 3: s.show_details();
                        break;
                    case 4: s.Deposit();
                        break;
                    case 5: exit(0);
        } 
    }
    else 
    {
             exit(0);
    }
    }
    return 0;
}


