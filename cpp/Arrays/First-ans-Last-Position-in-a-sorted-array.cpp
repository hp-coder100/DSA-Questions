#include <iostream>
#include <vector>
using namespace std;

int firstPosition(vector<int> &nums, int target)
{
    int s = 0, e = nums.size() - 1;
    int pos = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (target == nums[mid])
            pos = mid;
        if (target <= nums[mid])
            e = mid - 1;
        else
            s = mid + 1;
    }
    return pos;
}
int lastPosition(vector<int> &nums, int target)
{
    int s = 0, e = nums.size() - 1;
    int pos = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (target == nums[mid])
            pos = mid;
        if (target >= nums[mid])
            s = mid + 1;
        else
            e = mid - 1;
    }
    return pos;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> ans;
    ans.push_back(firstPosition(nums, target));
    ans.push_back(lastPosition(nums, target));
    return ans;
}
int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    vector<int> ans1 = searchRange(nums, 8);
    vector<int> ans2 = searchRange(nums, 6);
    cout << "Range of 8 " << ans1[0] << " " << ans1[1] << endl;
    cout << "Range of 6 " << ans1[0] << " " << ans1[1] << endl;

    return 0;
}