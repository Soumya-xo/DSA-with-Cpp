//Tc = o(n*n)
//SC = o(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 5;
    int arr[]= {5,4,3,2,1};

    for(int i =n-1;i>=0;i--){
        int didSwap = 0;
        for(int j =0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didSwap=1;
            }
        }
        if(didSwap==0){
            break;
        }
    }

    for(auto val: arr){
        cout<<val<<endl;
    }
    return 0;
}