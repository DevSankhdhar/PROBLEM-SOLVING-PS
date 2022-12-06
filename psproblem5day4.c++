//to find the lcm of the two numbers
#include<iostream>
using namespace std;
int main()
{int a,b,hcf,lcm;
cout<<"Enter the smaller number";
cin>>a;
cout<<"Enter the larger number";
cin>>b;
for(int i=a;i>=1;i--){
	if(a%i==0 && b%i==0){
	hcf=i;
	break;}
}
lcm=(a*b)/hcf;
cout<<"The L.C.M of two numbers ="<<lcm;
return 0;
}
