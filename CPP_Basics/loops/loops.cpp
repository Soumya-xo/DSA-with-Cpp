#include<iostream>
using namespace std;
int main(){
    // for(int i=0;i<50;i+=2){
    //     cout<<i<<endl;
    // }
    int oddSum = 0;
    for(int i= 1; i<10;i++){
        if(i%2!=0){
           oddSum+=i;
        }
        // else{
        //     continue;
        // }
    }
    cout<<oddSum;
   return 0;
}