//Find the sum of digits of a given number

#include <iostream>
using namespace std;

int main()
{

	int no1,no2,r,sum;

	
	
	
	cout<<"Find the sum of a given number"<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"Input number: "<<endl;
	cin >> no1;
	no2 = no1;
	
	


	while(no1 > 0)
	{
	r=no1%10;
	no1=no1/10;
	sum=sum+r;

	}
	
	//print the sum of the digits here.
	cout << "Sum of digit of " << no2 << " is:" << sum << endl;
	
}

