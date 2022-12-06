//Cartesian plane-
#include<iostream>
using namespace std;
int main()
{int x,y;
cout<<"Enter the value of x and y"<<endl;
cin>>x>>y;
if(x>=0 && y>=0)
cout<<"It lies in quadrant 1"<<endl;
else if(x<0 && y>=0)
cout<<"It lies in quadrant 2"<<endl;
else if(x<0 && y<0)
cout<<"It lies in quadrant 3"<<endl;
else
cout<<"It lies in quadrant 4"<<endl;
}
