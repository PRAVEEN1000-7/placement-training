#include <iostream>
using namespace std;

int main() {
    int x,y;
    cout << "Enter the start range: ";
    cin >> x;
    cout << "Enter the end range: ";
    cin >> y;
    cout<<"The prime numbers between "<<x<<" and "<<y<<" :"<<endl;
    for (int i=x;i<=y;i++){
    	int z=0;
    	for (int j=1;j<=i;j++){
    		if (i%j==0){
    			z++;
			}
		}
		if (z==2){
			cout<<i<<endl;
		}
	}

    return 0;
}
