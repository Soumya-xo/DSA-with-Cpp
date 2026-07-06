#include <iostream>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

// int main() {
//     string str= "sinstriiintng";

//     unordered_map<char,int>freq;
//     for(char ch :str){
//         freq[ch]++;
//     }
//     for(auto ch : freq){

//         if(ch.second>1){
//             cout<<ch.first<<":"<<ch.second<<"\t";
//         }
//     }
//     return 0;
// }

int main() {
    string str= "sinstriiintng";

    map<char,int>freq;
    for(char ch :str){
        freq[ch]++;
    }
    for(auto ch : freq){

        if(ch.second>1){
            cout<<ch.first<<":"<<ch.second<<"\t";
        }
    }
    return 0;
}