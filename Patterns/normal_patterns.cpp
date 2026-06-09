#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
