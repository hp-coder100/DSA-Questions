//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
void dfs(int s,int d,int &cnt,vector<int> &vis,vector<int> adj[])
   {
       if(s==d)
       {
           cnt++;
           return;
       }
       vis[s]=1;
       vector<int> temp=adj[s];
       for(int i=0;i<temp.size();i++)
       {
           if(vis[temp[i]]==0)
            dfs(temp[i],d,cnt,vis,adj);
       }
       vis[s]=0;
   }
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    // Code here
	     vector<int> adj[n];
    for(int i=0;i<edges.size();i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
    }
    vector<int> vis(n,0);
    int cnt=0;
    dfs(s,d,cnt,vis,adj);
    return cnt;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends