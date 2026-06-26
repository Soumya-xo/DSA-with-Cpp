
//217

// #include<iostream>
// #include<vector>
// using namespace std;;

// bool check(vector<int>& nums){
//         for(int i = 0; i<nums.size(); i++){
//             for(int j = i+1; j<nums.size(); j++){
//                 if(nums[i]==nums[j]){
//                     return true;
//                 }
//             }
//         }
//         return false;
// }

// int main(){
//     vector<int>arr={1,2,3,4,5};
//     bool ans = check(arr);
//     cout<<ans<<endl;
//      return 0;
// }


//1
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {

//         for(int i = 0; i < nums.size(); i++) {

//             int need = target - nums[i];

//             auto it = find(nums.begin(), nums.end(), need);

//             if(it != nums.end() && (it - nums.begin()) != i) {
//                 return {i, (int)(it - nums.begin())};
//             }
//         }

//         return {};
//     }
// };

// int main() {

//     vector<int> arr = {2,7,11,15};
//     int target = 9;

//     Solution obj;

//     vector<int> ans = obj.twoSum(arr, target);

//     cout << ans[0] << " " << ans[1] << endl;

//     return 0;
// }


// 121
// #include <iostream>
// #include <vector>
// using namespace std;
 
// class Solution{
// public:
//     int maxProfit(vector<int>& nums){
//         int profit = 0;
//         for(int i = 0; i<nums.size(); i++){
//             for(int j = i+1; j<nums.size(); j++){
//                 profit = max(profit, nums[j]-nums[i]);
//             }
//         }
//         return profit;
//     } 
// };    
//     int main(){

//         Solution obj;
//         vector<int> arr = {7,1,5,3,6,4};
//          cout<<obj.maxProfit(arr)<<endl;
//         return 0;

//     }


// 53
// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution{
// public:
//      int maxSubArray(vector<int>& nums){
//         int curSum =0;
//         int maxSum = INT_MIN;
//         for(int var : nums){
//             curSum += var;
//             maxSum = max(maxSum,curSum);
//             if(curSum<=0){
//                 curSum = 0;
//             }
//         }
//         return maxSum;
//      }   
// };
//  int main(){
//     vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
//     Solution obj;
//     cout<<obj.maxSubArray(arr)<<endl;
//     return 0;
//  }


//  283
// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {

//         int j = 0;

//         for(int i = 0; i < nums.size(); i++) {

//             if(nums[i] != 0) {
//                 swap(nums[i], nums[j]);
//                 j++;
//             }
//         }
//     }
// };
// int main (){
//     vector<int> arr = {0,1,0,3,12};
//     Solution obj;
//     obj.moveZeroes(arr);
//     for(int var : arr){
//         cout<<var;
//     }
// }


// 125
// #include <iostream>
// #include <string>
// using namespace std;

// class Solution {
// public:
//     bool isPalindrome(string s) {

//         string clean = "";

//         for(char ch : s) {
//             if(isalnum(ch)) {
//                 clean += tolower(ch);
//             }
//         }

//         int left = 0;
//         int right = clean.size() - 1;

//         while(left < right) {

//             if(clean[left] != clean[right]) {
//                 return false;
//             }

//             left++;
//             right--;
//         }

//         return true;
//     }
// };

// int main() {

//     Solution obj;

//     string s = "A man, a plan, a canal: Panama";

//     cout << obj.isPalindrome(s) << endl;

//     return 0;
// }




// 242
// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// class Solution {
// public:
//     bool isAnagram(string s, string t) {

//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());

//         return s == t;
//     }
// };

// int main() {

//     Solution obj;

//     string s = "anagram";
//     string t = "nagaram";

//     cout << boolalpha << obj.isAnagram(s, t) << endl;

//     return 0;
// }


//206
// #include <iostream>
// using namespace std;

// struct ListNode {
//     int val;
//     ListNode* next;

//     ListNode(int x) {
//         val = x;
//         next = nullptr;
//     }
// };

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {

//         ListNode* prev = nullptr;
//         ListNode* curr = head;

//         while(curr) {
//             ListNode* next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }

//         return prev;
//     }
// };

// int main() {

//     ListNode* head = new ListNode(1);
//     head->next = new ListNode(2);
//     head->next->next = new ListNode(3);

//     Solution obj;
//     head = obj.reverseList(head);

//     while(head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }



//20
// #include <iostream>
// #include <stack>
// using namespace std;

// class Solution {
// public:
//     bool isValid(string s) {

//         stack<char> st;

//         for(char ch : s) {

//             if(ch == '(' || ch == '{' || ch == '[') {
//                 st.push(ch);
//             }
//             else {

//                 if(st.empty())
//                     return false;

//                 if(ch == ')' && st.top() != '(')
//                     return false;

//                 if(ch == '}' && st.top() != '{')
//                     return false;

//                 if(ch == ']' && st.top() != '[')
//                     return false;

//                 st.pop();
//             }
//         }

//         return st.empty();
//     }
// };

// int main() {

//     Solution obj;

//     cout << boolalpha
//          << obj.isValid("{[]}")
//          << endl;

//     return 0;
// }


// 704
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {

//         int st = 0;
//         int end = nums.size() - 1;

//         while(st <= end) {

//             int mid = st + (end - st) / 2;

//             if(nums[mid] == target) {
//                 return mid;
//             }
//             else if(target < nums[mid]) {
//                 end = mid - 1;
//             }
//             else {
//                 st = mid + 1;
//             }
//         }

//         return -1;
//     }
// };

// int main() {

//     Solution obj;

//     vector<int> nums = {-1, 0, 3, 5, 9, 12};
//     int target = 9;

//     cout << obj.search(nums, target) << endl;

//     return 0;
// }


// 876
// #include <iostream>
// using namespace std;

// struct ListNode {
//     int val;
//     ListNode* next;

//     ListNode(int x) {
//         val = x;
//         next = nullptr;
//     }
// };

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {

//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast && fast->next) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         return slow;
//     }
// };

// int main() {

//     ListNode* head = new ListNode(1);
//     head->next = new ListNode(2);
//     head->next->next = new ListNode(3);
//     head->next->next->next = new ListNode(4);
//     head->next->next->next->next = new ListNode(5);

//     Solution obj;

//     ListNode* ans = obj.middleNode(head);

//     cout << ans->val << endl;
// }



// 141
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

class Solution {
public:
    bool hasCycle(ListNode *head) {

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next) {

            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
                return true;
        }

        return false;
    }
};

int main() {

    ListNode* n1 = new ListNode(1);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(3);

    n1->next = n2;
    n2->next = n3;
    n3->next = n2;   // cycle

    Solution obj;

    cout << boolalpha
         << obj.hasCycle(n1)
         << endl;
}
