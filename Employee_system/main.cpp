#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime>
#include "employee.h"
#include "salariedEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "commissionEmployee.h"
#include "date.h"

char *cutmonth(char *date);

int main()
{
    /* SalariedEmployee SE("hamza","alaa","123456",10000);
     CommissionEmployee CE("hamza","alaa","123456",10000,.06);
     BasePlusCommissionEmployee BPCE("mohamed","alaa","456789",5000,.04,300);


     vector<Employee *>employee(3);
     employee[0] = &SE;
     employee[1] = &CE;
     employee[2] = &BPCE;

     employee[2]->print();*/

    time_t now = time(0);
    char *dateOfsystem = ctime(&now);
    char *currntMonth = cutmonth(dateOfsystem);
    cout << currntMonth << endl;
    cout << Date::currentMonth(currntMonth) << endl;

     vector<Employee *> emp(3);
     emp[0] = new SalariedEmployee("hamza","alaa","1234567",9,20,2000,100);
     emp[1] = new CommissionEmployee("mohamed","alaa","124568",9,20,2000,.06,1000);
     emp[2] = new BasePlusCommissionEmployee("mazen","alaa","121212",1,20,2000,.06,10000);
     SalariedEmployee *sEMP;
     CommissionEmployee *CEMP;
     BasePlusCommissionEmployee *bEMP;

       for(size_t i ; i < emp.size();++i)
     {
       emp[i] ->print();
       
        }
     
     for(size_t i ; i < emp.size();++i)
     {
     
       if(emp[i]->birthDate.getMonth() ==  Date::currentMonth(currntMonth))
       {
           sEMP =  dynamic_cast<SalariedEmployee *>(emp[i]);
           CEMP =  dynamic_cast<CommissionEmployee*>(emp[i]);
           bEMP =  dynamic_cast<BasePlusCommissionEmployee *>(emp[i]);
           if(sEMP)
           {
            sEMP->setWeeklySalary(sEMP->getWeeklySalary() + 100);
           }
              if(CEMP)
           {
            CEMP->setGrossSalary(CEMP->getGrossSalary()+100);
           }
             if(bEMP)
           {
            bEMP->setBaseSalary(bEMP->getBaseSalary()+100);
           }
        }
     }
      cout<<"\n--------------------------------------------------------------\n";
       for(size_t i ; i < emp.size();++i)
     {
       emp[i] ->print();
       
        }
     
}
char *cutmonth(char *date)
{
    int counter = 0;
    char *firstC = 0;
    while (1)
    {
        if (date[counter++] == ' ')
        {
            firstC = date + counter;
            break;
        }
    }
    while (1)
    {
        if (date[++counter] == ' ')
        {
            date[counter] = '\0';
            return firstC;
        }
    }
}