//Display the number in reverse order
//fix and complete the program below.

#include <iostream>
using namespace std;

int main()
{
   int t,num,r,sum = 0;
   cout << "\n\n Display the number in reverse order:\n";
   cout << "-----------------------------------------\n";
   cout<<"user input a number: "<<endl;
   cin >> num;

for(t=num;num!=0;num=num/10)
{
	r=num % 10;
	sum=sum*10+r;

}
cout<<"The number in reverse order: " << sum <<endl;

}
