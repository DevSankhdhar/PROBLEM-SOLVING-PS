//TO FIND THE HCF OF TWO NUMBERS.
#include<iostream>
using namespace std;
int main()
{int a,b,hcf;
cout<<"Enter the two numbers";
cin>>a>>b;
for(int i=a;i>=1;i--){
	if(a%i==0 && b%i==0)
	{hcf=i;
	break;}
}
cout<<"The hcf of the two numbers is ="<<hcf;
return 0;
}
