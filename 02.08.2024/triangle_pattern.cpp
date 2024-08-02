#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int x;
	cout<<"Enter the range :";
	cin>>x;
	for (int i=0;i<=x;i++){
		for (int j=0;j<=i;j++){
			cout<<" * ";
		}
		cout<<endl;
	}
	
	return 0;
}
