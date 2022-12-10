#include"CheckingAccount.h"
#include<stdexcept>
CheckingAccount::CheckingAccount(double balance , double fee):Account(balance)
{
  this ->fee = fee;
}
bool CheckingAccount::debit(double amount)
{
  if(Account::debit(amount))
  {
      setBalance(getBalance()-fee);
  }
}

void CheckingAccount::credit(double amount)
{
    Account::credit(amount);
    setBalance(getBalance()-fee);
}

