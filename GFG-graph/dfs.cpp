void dfs(int curr, int V, vector<int> adj[], vector<int> &vis, vector<int> &ans){
        vis[curr] = 1;
        ans.push_back(curr);
        
        for(auto it:adj[curr])
            if(vis[it]==0)                         
                dfs(it, V, adj, vis, ans);
            
        
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        vector<int> vis(V, 0);
        for(int i=0;i<V;i++)
        if(vis[i]==0)   
            dfs(i, V, adj, vis, ans);
        return ans;
    }