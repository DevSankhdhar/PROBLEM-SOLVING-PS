//check whether entered character is a alphabet or vowel.
#include<iostream>
using namespace std;
int main(){

char alpha;
cout<<"Enter the character";
cin>>alpha;
if(alpha=='A' || alpha=='a' ||alpha=='E' || alpha=='e'|| alpha=='I'|| alpha=='i' || alpha=='O' || alpha=='o' || alpha=='U' || alpha=='u')
cout<<"You have entered a vowel"<<endl;
else
cout<<"You have entered a consunant"<<endl;
return 0;
}
