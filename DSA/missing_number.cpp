// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    //missing 9
    int arr[]={1,2,3,4,5,7,8,9,10,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int xor1,xor2;
    for(int i=0;i<n-1;i++)
    {
        xor1=xor1^i;
        xor2=xor2^arr[i];
    }
    
    cout<<(xor1^xor2^n^(n-1));
    

    return 0;
}