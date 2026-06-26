// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> arr = {1,2,-3,0,-4,-5};
//     int Max = 1;
//     int i =0;
    
//     for(int j =1;j<arr.size();j++){
//             int mul = arr[i] ;
//             mul *=arr[j];
//             Max = max(mul,Max);
//             if(mul<Max){
//                 i=j;
                
//             }
//         }
//         cout<<Max<<endl;
//     return 0;
// }



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {1, 2, -3, 0, -4, -5};

    int maxProd = arr[0];
    int minProd = arr[0];
    int ans = arr[0];

    for (int i = 1; i < arr.size(); i++) {

        if (arr[i] < 0)
            swap(maxProd, minProd);

        maxProd = max(arr[i], maxProd * arr[i]);
        minProd = min(arr[i], minProd * arr[i]);

        ans = max(ans, maxProd);
    }

    cout << ans << endl;
}