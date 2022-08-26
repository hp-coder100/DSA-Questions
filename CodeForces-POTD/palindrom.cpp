// #include<bits/stdc++.h>
// using namespace std;
// bool isPalindrom(string str){
//     int i=0,j= str.size()-1;
//     while(i<j){
//         if(str[i]!=str[j])
//             return false;
//         i++;
//         j--;
//     }
//     return true;
// }
// int findMax(vector<int> arr, int n){
//     int ans = INT_MIN;
//     for(auto i:arr){
//         ans = max(ans, i);
//     }
//     return ans;
// }
// int solve(vector<int> arr, int n, int k){
//     if(n==k)
//         return findMax(arr, k);
//     int ans = INT_MAX;
//     for(int i=0;i<n-1;i++){
        
//         ans = min(ans, solve(arr,n-1, k));
//     }
//     return ans;
// }

// // vector<int>  candies(int n, int k){
// //     struct Result result;

// //     int cnt =0;
// //     int i = 1;

// //     int arr[k];
// //     memset(arr, 0, k);
// //     int start = 0;
// //     int end = n;

// //     while(start<=end){
// //         int mid = (start+end)/2;
// //         int sum = (mid * (mid+1))/2;
// //         if(sum <=n){
// //             cnt = mid/k;

// //             start = mid+1;
// //         }
// //         else{
// //             end = mid-1;
// //         }
// //     }

// //     int last = cnt*k;
// //     n = n-(last*(last+1))/2;
// //     int t = (cnt*k) +1;

// //     while(n){
// //         if(t<=n){
// //             arr[i++] = t;
// //             n = n-t;
// //             t++;
// //         }
// //         else{
// //             arr[i]+= n;
// //             n =0;

// //         }

// //     }

// //     for( int i=0;i<k;i++){
// //         arr[i] += (cnt *(i+1)) + (k*(cnt*(cnt-1)));

// //     }
// //     for(auto i:arr){
// //         cout<< i<< " ";
// //     }
// //     result.output1 = arr;
// //     return Result;

// // }
// void printCandies(int n, int k)
// {
 
//     // Count number of complete turns
//     int count = 0;
 
//     // Get the last term
//     int ind = 1;
 
//     // Stores the number of candies
//     int arr[k];
 
//     memset(arr, 0, sizeof(arr));
 
//     int low = 0, high = n;
 
//     // Do a binary search to find the number whose
//     // sum is less than N.
//     while (low <= high) {
 
//         // Get mide
//         int mid = (low + high) >> 1;
//         int sum = (mid * (mid + 1)) >> 1;
 
//         // If sum is below N
//         if (sum <= n) {
 
//             // Find number of complete turns
//             count = mid / k;
 
//             // Right halve
//             low = mid + 1;
//         }
//         else {
 
//             // Left halve
//             high = mid - 1;
//         }
//     }
 
//     // Last term of last complete series
//     int last = (count * k);
 
//     // Subtract the sum till
//     n -= (last * (last + 1)) / 2;
 
//     int i = 0;
 
//     // First term of incomplete series
//     int term = (count * k) + 1;
 
//     while (n) {
//         if (term <= n) {
//             arr[i++] = term;
//             n -= term;
//             term++;
//         }
//         else {
//             arr[i] += n;
//             n = 0;
//         }
//     }
 
//     // Count the total candies
//     for (int i = 0; i < k; i++)
//         arr[i] += (count * (i + 1))
//                + (k * (count * (count - 1)) / 2);
 
//     // Print the total candies
//     for (int i = 0; i < k; i++)
//         cout << arr[i] << " ";
// }
// int main(){
//     printCandies(7, 4);
//     return 0;

// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int target, n;
//     cin>>target;
//     cin>>n;

//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//             cin>> arr[i];
            
//     }
//     int count = 0; 
//     for (int i = 0; i < n; i++)
//         for (int j = i + 1; j < n; j++)
//             if (arr[i] + arr[j] == target)
//                 count++;
 
//     cout<< count<<endl;
//     return 0;

// }


// struct Item {
//     int value;
//     int weight;
// };
 
// bool cmp(struct Item a, struct Item b)
// {
//     double r1 = (double)a.value / (double)a.weight;
//     double r2 = (double)b.value / (double)b.weight;
//     return r1 > r2;
// }
 
// double fractionalKnapsack(int W, struct Item arr[], int N)
// {
//     sort(arr, arr + N, cmp);
 
//     double finalvalue = 0.0; 
//     for (int i = 0; i < N; i++) {
//         if (arr[i].weight <= W) {
//             W -= arr[i].weight;
//             finalvalue += arr[i].value;
//         }
 
//         else {
//             finalvalue
//                 += arr[i].value
//                    * ((double)W / (double)arr[i].weight);
//             break;
//         }
//     }
 
//     return finalvalue;
// }

// int main(){
//     vector<int> weights(3),values(3);
//     int W;
//     for(int i=0;i<3;i++){
//         cin>>weights[i];
//     } 
//     for(int i=0;i<3;i++)
//         cin>>values[i];

//     cin>>W;

//     struct Item Items[3];
//     for(int i=0;i<3;i++){
//         Items[i].value = values[i];
//         Items[i].weight = weights[i];
//     }
//     double ans = fractionalKnapsack(W, Items, 3);
//     cout<<ans<<endl;
//     return 0;
// }



// int main(){
//     int n;
//     cin>>n;
//     if(n==1)
//         cout<<0<<endl;
//     else if(n==2)
//         cout<<1<<endl;
//     else{
//         int first = 0, second = 1;
//         for(int i=3;i<=n;i++){
//             int temp = first;
//             first = second;
//             second = second + temp;
//         }
//         cout<<second<<endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>=65 && s[i]<=90)
            s[i] = (char)(97+(s[i]-65));
    }
    cout<<s<<endl;
    return 0;
}