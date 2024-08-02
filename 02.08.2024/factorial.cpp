#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i,f=1;
	cout<<"Enter the number :";
	cin>>n;
	for (i=1;i<=n;i++){
		f=f*i;
	}
	cout<<"Factorial of "<<n<<":"<<f;
	
	return 0;
}
