#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int findFirst(vector<int> &nums, int target){
    int idx = -1;
    int start = 0;
    int end = nums.size() - 1;
    while(start <= end){
        int mid = (start + end) / 2;
        if(nums[mid] >= target){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        if(nums[mid] == target) idx = mid;
    }
    return idx;
}

int findLast(vector<int> &nums, int target){
    int idx = -1;
    int start = 0;
    int end = nums.size() - 1;
    while(start <= end){
        int mid = (start + end) / 2;
        if(nums[mid] <= target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        if(nums[mid] == target) idx = mid;
    }
    return idx;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        int first = findFirst(nums, target);
        if(first==-1)return ans;
        int last = findLast(nums, target);
        ans[0] = first;
        ans[1] = last;
        return ans;
    }
};