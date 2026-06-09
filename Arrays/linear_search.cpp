
#include<iostream>
using namespace std;
int linearearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,3,4,5,6,7,};
    int size=6;
    int target=6;
    int location=linearearch(arr,size,target);
    cout<<location<<endl;
    return 0;
}