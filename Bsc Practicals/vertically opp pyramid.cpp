#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter no of row of pyramid"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		
		{
			for(int k=1;k<i;k++)
			cout<<" ";
			for(int j=n;j>=i;j--)
			cout<<"*";
			for(int l=n-1;l>=i;l--)
			cout<<"*";
		
		}
		cout<<endl;
	}
}
