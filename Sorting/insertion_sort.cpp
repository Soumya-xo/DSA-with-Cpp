#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insertionSort(int arr[], int n){
     for(int i=1; i<n; i++){
        int current = arr[i];
        int previous = i-1;
        
        while(previous>=0 && arr[previous]>current){
            arr[previous+1] = arr[previous];
            previous--;
        }

        arr[previous+1] = current;
     }
}

void printArray(int arr[], int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main() {
    int arr[] = {4,1,5,2,3};
    int n = 5;
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}







class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid = 0;
        int high = nums.size()-1;
        int low = 0;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};