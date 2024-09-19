#include<iostream>
using namespace std;
int main()
{
int rows, i,j,k;
cout<<"Enter the Number of rows:"; //Ask user for the number of rows
cin>>rows;
for(i=1; i<=rows; i++) //Print the pyramid
{
	for(j=1; j<=rows-i; j++) //Using for space
	{
	cout<<" ";
	}		
	for(k=1; k<=2*i-1; k++)
	{
		cout<<"*";
		}
	cout<<endl;
		}
	return 0;
	}
