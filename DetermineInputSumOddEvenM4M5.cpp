#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout << "Please enter any number"<<endl;
	cin >> n;
	
	int sum =  0;
	
	while (n!=0){
		
		int digit=n % 10;
		sum = sum + digit;
		n = n / 10;
		
		
	}
	cout << "The sum is "<<sum<<endl;
	
	if (sum % 2 == 0){
		
		cout << "Even number"<<endl;
		
		
	}
	else if (sum % 2 !=0){
		
		cout << "Odd number"<<endl;
		
	}
	if (sum % 4 == 0){
		
		cout << "Multiple of 4"<<endl;
		
	}
	if (sum % 5 == 0){
		
		cout << "Multiple of 5"<<endl;
		
	}
	
	
}
