#include <iostream>
#include <vector>
#include <algorithm>
#include<sstream>
#include<map>
using namespace std;

// int main(){
//     string s = "takeuforward";
//     string x = "forward";

//     cout<<s.find(x);
// }

// int main(){
//     string s = "javA";
//     for(auto &ch : s){
//         if(islower(ch)){
//             ch = toupper(ch);
//         }else if(isupper(ch)){
//             ch = tolower(ch);
//         }
//     }
//     cout<<s;
// }

// int main(){
//     string s = "hello world";
//     stringstream ss(s);
//     string word;
//     int count = 0;
//     while(ss>>word){
//        count++;
//     }
//     cout<<count;
// }

// int main(){
//     string s = "zxcbg";
//     sort(s.begin(),s.end());
//     cout<<s;
// }

// int main(){
//     string s = "abc";
//     for(int i =0;i<s.size();i++){
//         s[i]=s[i]+1;
//     }
//     cout<<s;
// }

// int main(){
//     string s = "abcdef";
//     string x ="def";

//     for(int i =0;i<s.size();i++){
//         if(x.find(s[i])!=string::npos){
//             s.erase(i,1);
//             i--;
//         }
//     }
//     cout<<s;
// }

// int main(){
//     string str= "sinstriiintng";
//     map<char,int>freq;
//     for(auto ch : str){
//         freq[ch]++;
//     }
//     for(auto ch : freq){
//         if(ch.second>1){
//         cout<<ch.first<<" "<<ch.second<<"\n";
//     }
//     }
// }


int main(){
    string s="a+((b-c)+d)";
    for(int i =0;i<s.size();i++){
        if(s[i]=='(' || s[i]==')'){
            s.erase(i,1);
            i--;
        }
    }
    cout<<s;
}
