#include <iostream>

using namespace std;
/*program that dispalys the sum of all odd numbers and 
sum of all even numbers from 1to the number entered by user*/
int main() 
{
	int num1=1,num2,even_sum=0,odd_sum=0; //values declaration
	cout<<"\t\t\"SUM OF EVEN AND ODD CALCULATOR\"";
	cout<<"\n\n\n\n\tEnter the required number: "; cin>>num2; //input from user
	while(num1<=num2) //loop from 1 to entered value
	{
		if (num1%2==0) //if even number ,condition will execute
		{
			even_sum=even_sum+num1; //"even_sum" stores the sum of all even numbers
			
		}
		else // for odd number
		{
			odd_sum=odd_sum+num1; //"odd_sum" stores the sum of all odd numbers
			
		}
		num1++;
	}
	cout<<"\n\n\tSum of Even numbers from 1 to "<<num2<<" = "<<even_sum; //display output 1=even no.
	cout<<"\n\n\tSum of Odd numbers from 1 to "<<num2<<" = "<<odd_sum; //display output 2=odd no.
	
	return 0;
}
