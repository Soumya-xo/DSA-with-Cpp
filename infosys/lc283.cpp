// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int>arr = {0,1,0,3,12};

//     int i =0;
//     for(int j =0;j<arr.size();j++){
//         if(arr[j]!=0){
//             swap(arr[i],arr[j]);
//             i++;
//         }
//     }

//     for(auto var: arr){
//         cout<<var<<" ";
//     }
//     cout<<endl;

//     return 0;
// }




#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
     vector<int>arr = {0,1,0,3,12};

    int i =0;
    for(int j =0;j<arr.size();j++){
        if(arr[j]!=0){
           swap(arr[i],arr[j]);
           i++;
        }
    }
    for(auto val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}