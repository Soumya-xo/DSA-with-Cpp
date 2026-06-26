//brute force
//Tc = o(n2)
//SC = o(n)


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void freqCount(vector<int> &arr){
//     vector<bool>visited(arr.size(), false);
//     for(int i =0;i<arr.size();i++){
//         if(visited[i]==true){
//             continue;
//         }
//         int count =1;
//         for(int j = i+1;j<arr.size();j++){
//             if(arr[i]==arr[j]){
//                 count++;
//                 visited[j]==true;
//             }
//         }
//         cout<<"freq of "<<arr[i]<<" : "<<count<<endl;
//     }

// }

// int main() {
//     vector<int>arr = {1,2,3,4,5,6,3,4,5,2,7,8,9};
//     freqCount(arr);
//     return 0;
// }



//optimal
//TC = o(n)
//SC = o(n)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void freqCount(vector<int> &arr){
    unordered_map<int,int> freq;
    for(int i =0;i<arr.size();i++){
        freq[arr[i]]++;
    }
    for(auto val : freq){
        cout<< val.first << " -> "<< val.second<< endl;
    }
}

int main() {
    vector<int>arr = {1,2,3,4,5,6,2,3,4,5,6,8};
    freqCount(arr);
    return 0;
}