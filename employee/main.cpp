#include<iostream>
#include<vector>
#include"employeeplus.h"
#include"PieceWorker.h"
#include"employeeplus.h"
using namespace std ;

int main()
{ 
   vector<CommissionEmployee *>C(2);
    
    CommissionEmployee C1 ("mohamed","alaa","2223312",0.5,0.2);  
   // BasePlusCommissionEmployee emp("hamza","alaa","yesy",12.0,0.5,0.0);
    PieceWork P("hamza","alaa","123321",4,10);
    C[0] = &C1;
    C[1] = &P;
   cout<<"earnings : "<<C[0]->earnings()<<endl;
   cout<<"earnings : "<<C[1]->earnings()<<endl;
   C[0] ->print();
   C[1] ->print();

 }