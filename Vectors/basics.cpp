#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // vector<int>vec={1,2,3};
    // cout<<vec[2]<<endl;
    // cout<<vec.size()<<endl;
    // vec.push_back(8);
    // cout<<vec.front()<<endl;
    // cout<<vec.back()<<endl;
    // vec.pop_back();
    // cout<<vec.capacity()<<endl;
    // cout<<vec.at(1)<<endl;


    // vector<int>vec={1,2,3};
    // cout<<vec.size()<<" "<<vec.capacity()<<endl;
    // vec.push_back(4);
    // cout<<vec.capacity()<<endl;
    // cout<<vec.front();
    
    
    // vector<int>vec(3,10);  //size 3 with all element 10
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.push_back(6);
    // vec.erase(vec.begin()+3);
    // vec.erase(vec.end()-1);

    // for(int val : vec){
    //     cout<<val<<" ";
    // }
    // cout<<endl;


   vector<int>vec={1,2,3,4,5};
    vector<int>::iterator it;
    for(it=vec.begin(); it!=vec.end(); it++){
         cout<<*(it)<<" ";
    }
    cout<<endl;
    return 0;
}