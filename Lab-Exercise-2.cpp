//Check whether a number is prime or not
//finish up this program, properly, and nicely.

#include <iostream>
using namespace std;

int main()
{

	cout << "\n\n Find the perfect numbers between number 1 and 500:\n";
	cout << "-------------------------------------------------------\n";
	int i=1,u=1,sum=0;
	cout<<"The perfect numbers between 1 to 500 are: \n"<<endl;
    while(i<=500)
    {
	
		while(u<=500)
     {
	 
			if(u<i)
			{
			

				if(i % u ==0)
					sum=sum+u;
				}

	u++;
}
		if(sum==i) {
		
		cout<<i<<" "<<"\n";
		}
			
			

	i++;
		u=1;
		sum=0;

}
}
