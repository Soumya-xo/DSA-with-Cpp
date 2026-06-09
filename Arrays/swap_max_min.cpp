
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findSmall(int arr[], int size) {
    int idx = 0;
    for(int i = 1; i < size; i++) {
        if(arr[i] < arr[idx]) {
            idx = i;
        }
    }
    return idx;
}

int findBig(int arr[], int size) {
    int idx = 0;
    for(int i = 1; i < size; i++) {
        if(arr[i] > arr[idx]) {
            idx = i;
        }
    }
    return idx;
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;
    int bigNumIndex=findBig(arr,size);
    int smallNumIndex=findSmall(arr,size);
    
    swap(arr[bigNumIndex],arr[smallNumIndex]);
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}

