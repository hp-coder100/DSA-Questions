//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	int n;
int vis[1010][1010];
int dist[1010][1010];
int dx[8] = {1,1,-1,-1,2,2,-2,-2};
int dy[8] = {-2,2,-2,2,-1,1,1,-1};
int isValid(int x , int y){
   if(x<0||y<0||x>=n||y>=n){
       return 0;
   }else{
       return 1;
   }
}
int rec(vector<int>&k){
       queue<pair<int,int>>q;
       int l=k[0]-1;
       int r=k[1]-1; 
       q.push({l,r});
       dist[l][r]=0;
       while(!q.empty()){
           auto u=q.front();q.pop();
           int x=u.first;
           int y=u.second;
           for(int i=0;i<8;i++){
               int new_x=x+dx[i];
               int new_y=y+dy[i];
               if(isValid(new_x,new_y) && vis[new_x][new_y]==0){
                   if(dist[new_x][new_y]>1+dist[x][y]){
                       dist[new_x][new_y]=dist[x][y]+1;
                       q.push({new_x,new_y});
                       vis[new_x][new_y]=1;
                       
                   }
               }
           }
           
       }
   }


int minStepToReachTarget(vector<int>&K, vector<int>&T, int N){
    // Code here
    n=N;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dist[i][j]=1e9;
            vis[i][j]=0;
            
        }
    }
    rec(K);
   // for(int i=0;i<n;i++){
   //     for(int j=0;j<n;j++){
   //         cout<<dist[i][j]<<" ";
            
   //     }
   //     cout<<endl;
   // }
    int s=T[0];
    int r=T[1];
    return dist[s-1][r-1];
    
}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends