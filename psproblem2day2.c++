#include<stdio.h>
int fact(int n){
	int factorial=1;
	for(i=0;i<n;i++){
		factorial=factorial*i;
	}
	return factorial;
}
void main(){
    cout<<fact(16);

}
