#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binarySearch(int arr[],int k,int n){
     int l = 0;
     int r = n-1;
     
     while(l<=r){
         int mid = l+(r-l)/2;
        if(arr[mid]==k){
            return true;
        }else if(arr[mid]>k){
            r = mid-1;   
        }else{
            l= mid+1;
        }
     }
     return false;
}
bool checkSubset(int arr1[],int arr2[], int n, int m){
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    if(m<n){
        return false;
    }
    for(int i=0;i<n;i++){
        if(binarySearch(arr2,arr1[i],m) != true){
                return false;
         }       
     }
     return true;
   
}

int main() {
    int arr1[]= {1,3,4,5,2};
    int  n = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]= {2,4,3,1,7,5,15};
    int m = sizeof(arr2)/sizeof(arr1[0]);
    cout<<(bool)checkSubset(arr1,arr2,n,m)<<endl;
    return 0;
}