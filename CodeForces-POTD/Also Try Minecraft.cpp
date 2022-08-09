#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &arr, int i, int j){
	
	int mini = 0;
	if(i<j){
		for(int k=i;k<j;k++){
			if(arr[k-1] > arr[k])
				mini += arr[k-1] - arr[k];
		}
	}
	else{
		for(int k=j;k<i;k++)
			if(arr[k-1] < arr[k])
				mini+=arr[k] - arr[k-1];
	}
	return mini;
}

int main(){
	int n, m;
	cin>>n>>m;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];

    vector<int> dp(n+1, 0);
    for(int i=1;i<n+1;i++){
        dp[i] = dp[i-1] + arr[i-1];
    }    
	while(m--){
		int i, j;
		cin>>i>>j;
		cout<<solve(arr, i, j)<<endl;
	}
	return 0;
}