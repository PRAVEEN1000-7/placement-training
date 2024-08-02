#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int x[10],i,j,temp;
	cout<<"Enter the 10 elements :\n";
	for (i=0;i<10;i++){
		cin>>x[i];
	}
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			if (x[i]<x[j]){
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	cout<<"ascending values : ";
	for (i=0;i<10;i++){
		cout<<x[i]<<" ";
	}
	return 0;
}
