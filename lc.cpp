#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int high = nums.size()-1, low = 0, mid, ans = -1;
        if(target>nums[nums.size()-1]){
            return nums.size();
        }
        while(low<high){
            mid = (low + high) / 2;
            if(nums[mid]==target){
                ans = mid;
                break;
            }
            else if(nums[mid]>target){
                high = high - 1;
            }
            else{
                low = low + 1;
            }
        }
        if(ans == -1){
            return high;
        }
        return ans;
    }
};

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(3);
    a.push_back(5);
    a.push_back(6);
    int target = 8;
    Solution sol;
    int ans = sol.searchInsert(a, target);
    cout << ans << endl;
    return 0;
}