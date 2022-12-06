//to find if the triangle is equilateral,isoceles or scalene.
#include<iostream>
using namespace std;
int main()
{int a,b,c;
cout<<"Enter the three sides of triangle"<<endl;
cin>>a>>b>>c;
if(a==b && b==c && c==a)
cout<<"It is a equilateral triangle"<<endl;
else if(a!=b && b!=c && c!=a)
cout<<"It is a scalene triangle "<<endl;
else
cout<<"It is a isocelses triangle"<<endl;
return 0;}
