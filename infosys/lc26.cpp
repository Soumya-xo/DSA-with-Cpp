#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int>arr = {1,1,2,1};

   int j =0;
   for(int i =1;i<arr.size();i++){
     if(arr[i]!=arr[j]){
       j++;
       arr[j]=arr[i];
     }
   }
   
   cout<<j;
    return 0;
}