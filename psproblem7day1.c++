#include<iostream>
using namespace std;
int main()
{int temp;
cout<<"Enter the temprature in degree celcius"<<endl;
cin>>temp;
if(temp<0)
cout<<"It is freezing cold"<<endl;
else if(temp>=0 && temp<10)
cout<<"It is very cold weather"<<endl;
else if(temp>=10 && temp<20)
cout<<"It is cold weather"<<endl;
else if(temp>=20 && temp<30)
cout<<"Normal in temp"<<endl;
else if(temp>=30 && temp<40)
cout<<"Its Hot"<<endl;
else if(temp>=40)
cout<<"Its very hot"<<endl;
else 
cout<<"you have entered a wrong entity";
return 0;
}
