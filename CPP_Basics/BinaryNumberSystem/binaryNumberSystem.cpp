// //Decimal to Binary
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int ans = 0;
//     int num = n;
//     int pow = 1;

//     while (num > 0) {
//         int rem = num % 2;
//         num = num / 2;
//         ans = ans + pow * rem;
//         pow = pow * 10;
//     }

//     cout << ans<< endl;
//     return 0;
// }


//Binary to Decimal
// #include<iostream>
// using namespace std;

// int binaryToDecimal(int n) {
//     int rem;
//     int pow=1;
//     int ans=0;
//     while(n>0){
//         rem=n%10;
//         n/=10;
//         ans+=pow*rem;
//         pow*=2;
//     }
//     return ans;
// }

// int main(){
//     int num;
//     cin>>num;
//     cout<<"decimal value of "<<num<<" is "<<binaryToDecimal(num)<<endl;
//     return 0;
// }


// Check a number is power of two without loop
#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    if(num>0 && (num & num-1)==0){
        cout<<"power of 2 \n";
    }else{
        cout<<"not power of 2 \n";
    }
    return 0;
}