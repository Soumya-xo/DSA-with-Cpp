//brute force
//TC = o(n)
//sc = o(1)

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void checkPrime(int num){
//     if(num<2){
//         cout<<"no"<<endl;
//     }else if(num == 2){
//         cout<<"yes"<<endl;
//     }else{
//         for(int i =2;i<num-1;i++){
//             if(num%i == 0){
//                 cout<<"no"<<endl;
//                 break;
//             }
//         }
//         cout<<"yes"<<endl;
//     }
// }

// int main() {
//     int num = 7;
//     checkPrime(num);
//     return 0;
// }



//optimal
//TC = o(n^)
//Sc = o(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void checkPrime(int num){
   int count=0;

   for(int i = 1;i<=sqrt(num);i++){
       if(num%i == 0){
        count++;
       }
   }

   if(count>=2){
    cout<<"no"<<endl;
   }else{
    cout<<"yes"<<endl;
   }
}


int main() {
    int num = 49;
    checkPrime(num);
    return 0;
}