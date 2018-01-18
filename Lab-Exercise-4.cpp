//Display the pattern using numebr repeating for a row
//fix and complete the program below.


#include <iostream>
#include <string>
using namespace std;


int main()
{
	
	int i,j,rows,spc,k;
	
	cout<<"Display the pattern"<<endl;
	cout<<"-------------------"<<endl;
    cout<<"Input number of rows :"<<endl;
    
    cin >> rows;
    
    spc=rows+4-1;
	for(i=1;i<=rows;i++)
	{
	for(k=spc;k>=1;k--)
		{
		cout<<"  ";	
		}
	for(j=1;j<=1;j++)
	cout<<"*";
	cout<<endl;
	spc--;
	}
}
