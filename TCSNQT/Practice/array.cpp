#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

// int main(){
//     vector<int>arr;
//     int x;
//     while(cin>>x){
//         arr.push_back(x);
//     }

//     sort(arr.begin(),arr.end());
//     cout<<arr[0]<<endl;
//     return 0;
// }

// int main(){
//     vector<int>arr={5,4,3,2,1};
//     reverse(arr.begin(),arr.end());
//     for(auto val:arr){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// int main(){
//     vector<int>arr={10,5,10,15,10,5};
//     unordered_map<int,int>freq;
//     for(auto val:arr){
//         freq[val]++;
//     }
//     for(auto val:freq){
//         cout<<val.first<<" "<<val.second<<"\n";
//     }
//     return 0;
// }

// int main(){
//     vector<int>arr={4,2,8,6,15,5,9,20};
//     sort(arr.begin(),arr.end());
//     int mid = arr.size()/2;
//     reverse(arr.begin()+mid,arr.end());
//     for(auto val: arr){
//         cout<<val<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     vector<int>arr={1,2,3,4,5};
//     int sum =0;
//     for(auto val:arr){
//         sum+=val;
//     }
//     cout<<sum;
// }

// vector<int>left(vector<int>&arr,int n,int k){
//     k%=n;
//     reverse(arr.begin(),arr.begin()+k);
//     reverse(arr.begin()+k,arr.end());
//     reverse(arr.begin(),arr.end());
//     return arr;

// }

// vector<int>right(vector<int>&arr,int n,int k){
//     k%=n;
//     reverse(arr.begin(),arr.end());
//     reverse(arr.begin(),arr.begin()+k);
//     reverse(arr.begin()+k,arr.end());
//     return arr;

// }

// int main(){
//     vector<int>arr = {1,2,3,4,5};
//     int n = 5;
//     int k =2;
//     vector<int>ans=right(arr,n,k);
//     for(auto val:ans){
//         cout<<val;
//     }
//     return 0;
// }


// int main(){
//     vector<int>arr = {2,3,1,9,3,1,3,9};
//     unordered_map<int,bool>seen;
//     vector<int>ans;
//     for(auto it:arr){
//         if(!seen[it]){
//             ans.push_back(it);
//             seen[it]=true;
//         }
//     }
//     for(auto val:ans){
//        cout<<val;
//     }
//     return 0;
// }


// int main(){
//     vector<int>arr={1,2,3,4};
//     arr.insert(arr.begin(),6);
//     arr.push_back(7);
//     arr.insert(arr.begin()+4,9);
//     for(auto val:arr){
//         cout<<val;
//     }
// }

//  int main(){
//     vector<int>arr={1,2,3,4};
//     arr.erase(arr.begin());
//     arr.pop_back();
//     arr.erase(arr.begin()+1);
//     for(auto val:arr){
//         cout<<val;
//     }
// }

// int main(){
//     vector<int>arr={1,1,2,3,4,4,5,2};
//     unordered_map<int,int>freq;
//     for(auto val:arr){
//        freq[val]++;
//     }
//     for(auto val:arr){
//         if(freq[val]>1){
//             cout<<val;
//             freq[val]=0;
//         }
//     }
// }

// int main(){
//     vector<int>arr={20,15,26,2,2,98,6};
//     vector<int>sorted=arr;
//     sort(sorted.begin(),sorted.end());
//     unordered_map<int,int>rank;

//     int x = 1;

//     for(int i=0;i<sorted.size();i++){
//         if(rank.find(sorted[i])==rank.end()){
//             rank[sorted[i]]=x;
//             x++;
//         }
//     }
//     for(int i =0;i<arr.size();i++){
//         arr[i]=rank[arr[i]];
//     }

//     for(auto val:arr){
//         cout<<val;
//     }
//     return 0;
// }

// int main(){
//     int n = 543;
//     string s = to_string(n);
//     cout<<s.size();
// }

int gcd(int a,int b){
    if(a==0){
        return b;
    }if(b==0){
        return a;
    }
    if(a>b){
        return gcd(a-b,b);
    }
    return gcd(a,b-a);
}
int main(){
    int a =20;
    int b =15;
    cout<<gcd(a,b);

}