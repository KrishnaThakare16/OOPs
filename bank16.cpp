#include <bits/stdc++.h>
using namespace std;
class account
{
private:
    string name;
    string type;
    int accno;

public:
    void get_info()
    {
        cout << "Enter name:- ";
        cin >> name;
        cout << "Enter type of account:- ";
        cin >> type;
        cout << "Enter account no.:- ";
        cin >> accno;
    }
    void display_info()
    {
        cout << "Name of customer is " << name<<endl;
        cout << "Account type is " << type<<endl;
        cout << "Account no. is " << accno<<endl;
    }
};

class current : public account
{
private:
    float balance;

public:
    void c_balance()
    {
        cout << "Balance:- \n" << balance;
    }
    void c_deposite()
    {
        float deposit;
        cout << "Enter amount for deposite: ";
        cin >> deposit;
        balance = balance + deposit;
    }
    void c_withdraw()
    {
        float withdraw;
        cout << "Enter amount for withdraw: ";
        cin >> withdraw;
        if (balance < 1000)
        {
            balance = balance - withdraw;
        }
        else
        {
            cout << "Insufficient Balance";
        }
    }
};

class saving : public account
{
private:
    float balance;

public:
    void s_balance()
    {
        cout << "Balance:- " << balance;
    }
    void s_deposite()
    {
        float deposit,intrest;
        cout << "Enter amount for deposite: ";
        cin >> deposit;
        intrest=balance*6.5;
        balance =  intrest + deposit;
    }
    void s_withdraw()
    {
        float withdraw;
        cout << "Enter amount for withdraw: ";
        cin >> withdraw;
        if (balance > 1000)
        {
            balance = balance - withdraw;
        }
        else
        {
            cout << "Insufficient Balance";
        }
    }
};

int main()
{
    class saving s;
    class current c;
    char a;
    int ch;
    cout << "Enter account type S for Saving C for Current: ";
    cin >> a;
    if (a == 's' || a == 'S')
    {
        s.get_info();
        do
        {
            cout << "\nOptions" << endl;
            cout << "1.Deposit\n2.Withdraw\n3.Balance\n4.Balance with account information\n5.exit" << endl;
            cout << "Enter your choice:- ";
            cin >> ch;
            switch (ch)
            {
            case 1:
                s.s_deposite();
                break;
            case 2:
                s.s_withdraw();
                break;
            case 3:
                s.s_balance();
                break;
            case 4:
                s.s_balance();
                s.display_info();
                break;
            case 5:
                cout << "Exit!";
                break;
            default:
                cout << "Invalid Input" << endl;
                break;
            }
        } while (ch != 5);
    }
    else if (a == 'c' || a == 'C')
    {
        c.get_info();
        do
        {
            cout << "Options" << endl;
            cout << "1.Deposit\n2.Withdraw\n3.Balance\n4.Balance with account information\n5.exit" << endl;
            cout << "Enter your choice:- ";
            cin >> ch;
            switch (ch)
            {
            case 1:
                c.c_deposite();
                break;
            case 2:
                c.c_withdraw();
                break;
            case 3:
                c.c_balance();
                break;
            case 4:
                c.c_balance();
                c.display_info();
                break;
            case 5:
                cout << "Exit!";
                break;
            default:
                cout << "Invalid Input" << endl;
                break;
            }
        } while (ch != 5);
    }
    else
    {
        cout << "Invalid input";
    }

    return 0;
}
