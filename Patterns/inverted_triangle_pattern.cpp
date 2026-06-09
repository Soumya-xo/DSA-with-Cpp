
#include<iostream>
using namespace std;
int main(){ 
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int num = 1;
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int k=n-i;k>=0;k--){
            cout<<num;
            num++;
        }
        cout<<endl;

    }
    return 0;
}
