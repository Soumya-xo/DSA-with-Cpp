
//brute force
//TC = o(nlogn) (for sorting)
//Sc = o(1)


// #include<iostream>
// using namespace std;

// int findSmallest(vector<int> & arr){
//     sort(arr.begin(),arr.end());
//     return arr[0];
// }

// int main (){
//     vector<int>arr = {1,2,3,42,5,6,7};
//     cout<<findSmallest(arr)<<endl;
    // return 0; 
// }




//optimal
//TC = o(n)
//SC = o(1)


#include<iostream>
using namespace std;

int findSmallest(vector<int>&arr){
    int smallest = arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}

int main(){
    vector<int>arr = {6,5,4,3,2,1,0};
    cout<<findSmallest(arr)<<endl;
    return 0;
}
