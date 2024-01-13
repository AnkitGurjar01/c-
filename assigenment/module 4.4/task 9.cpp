#include<iostream>
using namespace std;
class A{
	public:
		int a[5],i,sum=0;
	show()
	{
	 for(i=0;i<4;i++)
	 {
	 	cout<<"Enter Number : ";
	 	cin>>a[i];
	}
	for(i=0;i<4;i++)
	{
		cout<<"Number is : ";
		cin>>i;
		cin>>a[i];
	}
	for(i=0;i<4;i++)
	{
	      sum+=a[i];	
	}
	cout<<"Enter sum : ";
	cin>>sum;
}
	
};
int main()
{
      A obj;
	  obj.show();	
}
