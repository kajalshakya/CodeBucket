#include<bits/stdc++.h>
using namespace std;
class comboofmilkandbiscute {
	public:
	int milk;
	int biscuit;
	int totalCost(int m,int b){
		int total=m+b;
		return total;
	}
};
int main()
{
	comboofmilkandbiscute ram;
	ram.milk=30;
	ram.biscuit=45;
	cout<<ram.milk;
	cout<<ram.biscuit;
	cout<<ram.totalCost(56,67);
}
