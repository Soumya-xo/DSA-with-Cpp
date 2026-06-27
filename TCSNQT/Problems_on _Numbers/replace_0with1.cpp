//TC = o(d)
//SC = o(d)

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include<stack>
// using namespace std;

// int main() {
//     int num = 1103400;
//     stack<int>st;
//     if(num==0){
//         cout<<1<<endl;
//     }else{

//     while(num>0){
//         int rem = num%10;
//         if(rem==0){
//             st.push(1);
//         }else{
//         st.push(rem);
//         }
//         num /=10;
//     }
//     int ans = 0;
//     while(!st.empty()){
//          ans = ans*10 + st.top();
//          st.pop();
//     }

//     cout<<ans<<endl;
// }
//     return 0;
// }



//optimal
//TC =o(d)
//SC = o(n)

#include <iostream>
#include <vector>
#include <algorithm>
#include<numeric>
using namespace std;

int main() {
    int num = 102003;
    int New =0;
    
    if(num ==0){
        cout<<1<<endl;
    }else{
         
        while(num>0){
            int rem = num%10;
            if(rem==0){
                New = New*10 + 1;
            }else{
                 New = New*10 +rem;
            }
            num/=10;
        }
         
        int result =0;
        while(New>0){
            int rem = New%10;
            result = result*10 +rem;
            New /=10;
        }
        cout<<result<<endl;
    }
    return 0;
}