//to find the day at a given date
#include<iostream>
using namespace std;
int main(){
int date;
int month,m;
int century,c,g,f,d;
int day;
cout<<"Enter the date";
cin>>date;
cout<<"Enter the month";
cin>>month;
cout<<"Enter the century";
cin>>century;
if(month==1)
m=1;
else if(month==2)
m=4;
else if(month==3)
m=4;
else if(month==4)
m=0;
else if(month==5)
m=2;
else if(month==6)
m=5;
else if(month==7)
m=0;
else if(month==8)
m=3;
else if(month==9)
m=6;
else if(month==10)
m=1;
else if(m==11)
m=4;
else if(m==12)
m=6;
else
cout<<"you have entered a wrong value";
if((century>=1500)&&(century<=1599))
c=0;
else if((century>=1600)&&(century<=1699))
c=6;
else if((century>=1700)&&(century<=1799))
c=4;
else if((century>=1800)&&(century<=1899))
c=2;
else if((century>=1900)&&(century<=1999))
c=0;
else if((century>=2000)&&(century<=2099))
c=6;
else 
cout<<"you have entered a wrong value";
g=century%100;
f=g/4;
d=date+m+c+g+f;
day=d%7;
if(day==1)
cout<<"Sunday";
else if(day==2)
cout<<"Monday";
else if(day==3)
cout<<"Tuesday";
else if(day==4)
cout<<"Wednesday";
else if(day==5)
cout<<"Thursday";
else if(day==6)
cout<<"Friday";
else if(day==0)
cout<<"Saturday";
else 
cout<<"Wrong Quantity";
return 0;}
