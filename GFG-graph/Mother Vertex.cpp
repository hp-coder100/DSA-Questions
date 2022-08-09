void dfs(vector<int> adj[], vector<int> &vis, vector<int> &nodes, int curr, int &count){
        vis[curr] = 1;
        count++;
        for(auto it:adj[curr]){
            if(!vis[it])
                dfs(adj, vis, nodes, it, count);
            else
                nodes[curr]+=nodes[it];
        }
    }
    
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    vector<int> vis(V,0);
	    vector<int> nodes(V,0);
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            int count = 0;
	            dfs(adj, vis, nodes, i, count);
	            nodes[i] += count;
	            if(nodes[i]==V)
	                return i;
	        }
	    }
	    return -1;
	    
	}