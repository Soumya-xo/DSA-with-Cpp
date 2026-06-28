// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     int n = 11;
//     int binary = 0;
//     int base =0;

//     while(n>0){
//         int rem = n%2;
//         binary += rem*pow(10,base);
//         base++;
//         n /=2;
//     }

//     cout<<binary<<endl;
//     return 0;
// }



#include <iostream>
#include <vector>
#include <algorithm>
#include<bitset>
using namespace std;

int main() {
    int num  = 11;
    cout<<bitset<4>(num);
    // cout<<bitset<8>(num);
    return 0;
}