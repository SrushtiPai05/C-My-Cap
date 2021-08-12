#include <iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter marks out of 100:\n";
	cin>>marks;
	
	if(marks>=90)
	{
		cout<<"Grade A";
	}
	else if(marks>=80)
	{
	    cout<<"Grade B";
	}
	else if(marks>=70)
	{
		cout<<"Grade C";
	}
	else if(marks>=60)
	{
		cout<<"Grade D";
	}
	else if(marks>=50)
	{
		cout<<"Grade E";
	}
	else if(marks>=40)
	{
		cout<<"Grade F";
	}
	else 
	{
		cout<<"Fail";
	}
	
}
