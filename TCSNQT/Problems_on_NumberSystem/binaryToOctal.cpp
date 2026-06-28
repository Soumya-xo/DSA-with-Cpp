//Buitlin Functon use

// #include <iostream>
// using namespace std;

// int main() {
//     string binary = "1011101";

//     int decimal = stoi(binary, nullptr, 2);

//     cout << oct << decimal;

//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;

string convert(string s){
    int n  = s.size();

    if(n%3==1){
        s = "00" +s;
    }
    else if(n%3==2){
        s = "0" + s;
    }

    n = s.size();
    string ans = "";

    for(int i =0;i<n;i+=3){
      int temp = (s[i]-'0')*4 + (s[i+1]-'0')*2 + (s[i+2]-'0')*1;
      ans += temp + '0';
    }
    return ans ;
}

int main() {
    string s = "1011101";
     cout<<convert(s);
    return 0;
}