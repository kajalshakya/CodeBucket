// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={0,1,2,0,1,2};
    int size=(sizeof(arr)/sizeof(arr[0]));
    int countZero=0;
    int countOne=0;
    int countTwo=0;
    int i=0;
    for(i=0;i<size;++i){
        if (arr[i]==0){
            countZero++;
        }
        else if (arr[i]==1){
            countOne++;
        }
        else if (arr[i]==2){
            countTwo++;
        }
    }
    for(i=0;i<countZero;++i){
        arr[i]=0;
    }
    for(i=countZero;i<countZero+countOne;++i){
        arr[i]=1;
    }
    for(i=countZero+countOne;i<size;++i){
        arr[i]=2;
    }
    for(i=0;i<size;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}