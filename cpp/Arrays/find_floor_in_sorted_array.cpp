#include <iostream>
#include <vector>
using namespace std;

int floorInSortedArray(int n, int x, vector<int> &arr)
{
    // Write your code here.
    int s = 0, e = n - 1;
    int ansInd = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x)
            return arr[mid];
        if (arr[mid] < x)
        {
            ansInd = arr[mid];
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return ansInd;
}

int main()
{
    vector<int> arr = {1, 3, 4, 6, 7, 9, 10, 14, 17, 18};
    int ans = floorInSortedArray(arr.size(), 12, arr);
    cout << "Answer is " << ans << endl;
    return 0;
}