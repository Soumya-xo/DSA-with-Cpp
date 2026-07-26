#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int>arr = {0,1,2,2,3,0,4,2};
    int val = 2;
    
    int j = 0;
    for(int i =0;i<arr.size();i++){
        if(arr[i]!=val){
          arr[j]=arr[i];
          j++; 
        }
    }
    cout<<j<<endl;
    return 0;
}