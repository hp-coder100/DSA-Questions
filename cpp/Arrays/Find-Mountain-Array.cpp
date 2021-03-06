#include <iostream>
#include <vector>
using namespace std;
class MountainArray
{
public:
    vector<int> Arr;

    int get(int index)
    {
        return Arr[index];
    }
    int length()
    {
        return Arr.size();
    }
};
int findInMountainArray(int target, MountainArray &A)
{
    int left = 0, right = A.length() - 1;
    // Find the peak index
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (A.get(mid) < A.get(mid + 1))
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    int peak = left;

    // Binary search on increasing subarray
    left = 0;
    right = peak;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (A.get(mid) < target)
        {
            left = mid + 1;
        }
        else if (A.get(mid) > target)
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }

    // Binary search on decreasing subarray
    left = peak;
    right = A.length() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (A.get(mid) < target)
        {
            right = mid - 1;
        }
        else if (A.get(mid) > target)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    MountainArray mountainArr;
    mountainArr.Arr = {1, 2, 3, 4, 5, 3, 1};
    int target = 3;
    int ans = findInMountainArray(target, mountainArr);
    cout << ans << endl;
    return 0;
}