vector<vector<int>> printGraph(int V, vector<int> adj[]) {
        // Code here
        vector<vector<int>> ans;
        for(int i=0;i<V;i++){
            vector<int> temp = {i};
            temp.insert(temp.end(), adj[i].begin(), adj[i].end());
            ans.push_back(temp);
        }
        return ans;
    }