#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  string str = "zxcdb";

  for(int i =0;i<str.size()-1;i++){
    for(int j =i+1;j<str.size();j++){
        if(str[i]>str[j]){
            swap(str[i],str[j]);
        }
    }
  }
  cout<<str<<endl;

    return 0;
}