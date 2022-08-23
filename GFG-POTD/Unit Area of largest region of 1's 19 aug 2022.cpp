//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
     private :
        vector<int> dx = {-1, -1, -1, 0, 1, 1, 1, 0};
        vector<int> dy = {-1, 0, 1, 1, 1, 0, -1, -1};
        
        bool isvalid(int i,int j ,int n,int m) {
            return !(i<0 || j < 0 ||i >=n|| j >=m);
        }
        int getarea(int i, int j,vector<vector<int>>& grid) {
            grid[i][j]=0;
            int tmp=1;
            for(int t=0;t<8;++t) {
               int x=dx[t]+i;
               int y=dy[t]+j;
               if( isvalid(x,y,grid.size(),grid[0].size()) && grid[x][y] == 1)
                    tmp+=getarea(x,y,grid);
            }
            return tmp;
        }
    
    public:  
        int findMaxArea(vector<vector<int>>& grid) {
            int ans=0;
           for(int i=0;i<grid.size() ; ++i) {
               for(int j=0;j<grid[0].size() ; ++j) {
                   if(grid[i][j]==1) {
                       ans=max(ans,getarea(i,j, grid));
                   }
               };
           }
           return ans;
        }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends