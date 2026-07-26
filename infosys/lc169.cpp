// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int>arr = {3,2,3};

//     int candidate = 0;
//     int count =0;

//     for(auto val:arr){
//         if(count==0){
//           candidate=val;
//         }
//         if(val == candidate){
//             count++;
//         }else{
//             count--;
//         }
//     }
//     cout<<candidate<<endl;
//     return 0;
// }




#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int>arr = {3,2,3};

    int candidate = arr[0];
    int count = 0;

    for(auto val : arr){
        if(count==0){
            candidate = val;
        }
        if(val==candidate){
            count++;
        }else {
            count--;
        }
    }

    cout<<candidate<<endl;
    return 0;
}