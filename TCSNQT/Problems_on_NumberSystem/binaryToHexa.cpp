// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     string s = "10111010";

//     int decimal = stoi(s,nullptr,2);
//     cout<< hex << uppercase << decimal;

//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void convert(string s){
//     int n = s.size();

//     if(n%4==1){
//         s = "000"+s;
//     }else if(n%4==2){
//         s = "00" + s;
//     }else if(n%4==3){
//         s = "0" + s;
//     }

//     n = s.size();
//     string ans = "";

//     for(int i =0; i<n ;i+=4){
//         int temp = (s[i]-'0')*8 + (s[i+1] - '0')*4 + (s[i+2] -'0')*2 + (s[i+3] - '0')*1 ;
//         if (temp < 10)
//     ans += temp + '0';
// else
//     ans += temp - 10 + 'A';
//     }

//     cout<<ans<<endl;
// }

void convert(string s){
    if(s.size()%4==1){
       s="000"+s;
    }else if (s.size()%4==2){
        s="00"+s;
    }else if(s.size()%4==3){
        s = "0"+s;
    }
    string ans="";
    for(int i=0;i<s.size();i+=4){
     int temp = (s[i]-'0')*8 + (s[i+1] - '0')*4 + (s[i+2] -'0')*2 + (s[i+3] - '0')*1 ;
      if (temp < 10)
    ans += temp + '0';
else
    ans += temp - 10 + 'A';
    }

    cout<<ans;
}

int main() {
    string s = "10111010";
    convert(s);
    return 0;
}

