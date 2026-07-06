#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int main() {
//     string str1 = "abcdef";
//     string str2 = "cefz";
//     string ans;
//     for(char ch : str1){
//         if(str2.find(ch)==string::npos){
//             ans+=ch;
//         }
//     }
//     cout<<ans<<endl;

//     return 0;
// }


int main(){
    string str1 = "abcdef";
    string str2 = "cefz";

    for(int i =0;i<str1.size();i++){
        if(str2.find(str1[i])!=string::npos){
            str1.erase(i,1);
            i--;
        }
    }

    cout<<str1<<endl;
    return 0;
}


