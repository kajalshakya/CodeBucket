#include<iostream>
using namespace std;
void gcd(int x,int y);
int main()
{
	int a,b;
	cout<<"enter two no"<<endl;
	cin>>a>>b;
	gcd(a,b);
}
void gcd(int x,int y)
{
	if(x>y)
	{
		int temp;
		temp=x;
		x=y;
		y=temp;
	}
	if(y%x==0)
	{
		cout<<"gcd is "<<x;
	}
	else
	{
		int a=y/x;
		gcd(x,a);
	}
}
