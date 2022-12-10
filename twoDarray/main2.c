#include <stdio.h>
typedef struct Employee 
{
    int code ; 
    double salary;
    char name[];
}Emp;
Emp inputData();
int main()
{
     Emp e = inputData();
     printf("%s\n",e.name);
     printf("%d\n",e.code);
     printf("%f\n",e.salary);
}
Emp inputData()
{ 
    Emp e ; 
    printf("%s\n","enter the name :");
    scanf("%s",e.name);
    printf("%s\n","enter the code:");
    scanf("%d",e.code);
    printf("%s\n","enter the salary:");
    scanf("%lf",&e.salary);   
    return e ;
}
