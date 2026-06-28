//Brute force method
//TC = o(n)
//SC = o(1)

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include<cmath>
// using namespace std;

// int convert(int n){
//     int sum =0;

//     int i =0;
//     while(n>0){
//         int rem = n%10;
//         sum = sum+(rem * pow(2,i));
//         i++;
//         n /=10;
//     }

//     return sum;
// }

// int main() {
//     int n = 1011;
//     cout<<convert(n)<<endl;

//     return 0;
// }


//builtin function use

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string  s = "11111";
    cout<<stoi(s,0,2);
    return 0;
}