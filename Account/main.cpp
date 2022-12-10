#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    SavingsAccount s(800, 25);
    CheckingAccount account(400, 3);
    SavingsAccount *S;
    CheckingAccount *C;
    int amount;
    vector<Account *> A(2);
    A[0] = &s;
    A[1] = &account;
    for (int i = 0; i < A.size(); ++i)
    {
        S = dynamic_cast<SavingsAccount *>(A[i]);
        C = dynamic_cast<CheckingAccount *>(A[i]);
        if (S)
        {
            cout << "the balance is :" << A[i]->getBalance() << endl;
            cout << "enter the amount of mony yo crediat " << typeid(A[i]).name() << ':';
            cin >> amount;
            A[i]->credit(amount);
            cout << "enter the amount for depost mony " << typeid(A[i]).name() << ':';
            cin >> amount;
            A[i]->debit(amount);
            cout << "the balance is :" << A[i]->getBalance() << endl;
            cout << "the interest is equal :"<< S->calculateInterest()<<endl;
            S->credit(S->calculateInterest());
            cout<<"Your Balance :"<<A[i]->getBalance()<<endl;
        }
        else if (C)
        {
            cout << "the balance is :" << A[i]->getBalance() << endl;
            cout << "enter the amount of mony yo crediat " << typeid(A[i]).name() << ':';
            cin >> amount;
            A[i]->credit(amount);
            cout << "enter the amount for depost mony " << typeid(A[i]).name() << ':';
            cin >> amount;
            A[i]->debit(amount);
            cout << "the balance is :" << A[i]->getBalance() << endl;
        }
    }
}