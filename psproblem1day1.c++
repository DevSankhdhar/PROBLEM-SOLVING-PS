//To calculate the total salary of a person.
#include<iostream>
using namespace std;
int main()
{int bsalary,hra,da,allow,pf,tsalary;
char grade;
cout<<"Enter Basic Salary"<<endl;
cin>>bsalary;
cout<<"Enter the grade"<<endl;
cin>>grade;
hra=0.2*bsalary;
da=0.5*bsalary;
if(grade=='A')
allow=1700;
else if(grade=='B')
allow=1500;
else
allow=1300;
pf=0.11*bsalary;
tsalary=bsalary+hra+da+allow-pf;
cout<<"The total salary is= "<<tsalary;
return 0;
}
