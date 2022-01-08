#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int s, int e)
{
    if (s == e)
        return s;
    int mid = (s + e) / 2;

    if (nums[mid] > nums[mid + 1])
        return binarySearch(nums, s, mid);
    else
        return binarySearch(nums, mid + 1, e);
}
//binarySearch using iteration
int binaryIteration(vector<int> &nums)
{
    int s = 0, e = nums.size() - 1;
    if (s == e)
        return s;
    int ans = 0;
    while (s < e)
    {
        int mid = (s + e) / 2;

        if (nums[mid] > nums[mid + 1])
            e = mid;
        else
            s = mid + 1;
    }
    return e;
}
int findPeakElement(vector<int> &nums)
{
    return binaryIteration(nums);
    //return binarySearch(nums, 0, nums.size()-1);
}
int binarySearch(vector<int> &nums, int s, int e)
{
    if (s == e)
        return s;
    int mid = (s + e) / 2;

    if (nums[mid] > nums[mid + 1])
        return binarySearch(nums, s, mid);
    else
        return binarySearch(nums, mid + 1, e);
}
//binarySearch using iteration
int binaryIteration(vector<int> &nums)
{
    int s = 0, e = nums.size() - 1;
    if (s == e)
        return s;
    int ans = 0;
    while (s < e)
    {
        int mid = (s + e) / 2;

        if (nums[mid] > nums[mid + 1])
            e = mid;
        else
            s = mid + 1;
    }
    return e;
}
int findPeakElement(vector<int> &nums)
{
    return binaryIteration(nums);
    //return binarySearch(nums, 0, nums.size()-1);
}
int main()
{
    vector<int> nums = {1, 2, 4, 5, 3, 4, 8};
    cout << findPeakElement(nums) << endl;
    return 0;
}