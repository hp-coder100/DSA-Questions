#include <iostream>
#include <vector>
using namespace std;
char nextGreatestLetter(vector<char> &letters, char target)
{
    int s = 0, e = letters.size() - 1;
    int ans = 0;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (letters[mid] <= target)
            s = mid + 1;
        else
        {
            ans = mid;
            e = mid - 1;
        }
    }
    return letters[ans];
}
int main()
{
    vector<char> arr = {'c', 'f', 'j'};
    char target = 'a';
    char ans = nextGreatestLetter(arr, target);
    cout << "Answer is " << ans << endl;
    return 0;
}