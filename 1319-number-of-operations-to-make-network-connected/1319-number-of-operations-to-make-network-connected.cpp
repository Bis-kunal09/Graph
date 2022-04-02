class Solution {
public:
     void dfs(int i,vector<bool>& vis,unordered_map<int,vector<int>> &adj){
        vis[i]=true;
        for(auto x:adj[i] ){
            if(vis[x]==false){
                dfs(x,vis,adj);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        unordered_map<int,vector<int>> adj;
        vector<bool> vis(n,false);
        int edges=0;
        for(int i=0;i<connections.size();i++){
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
            edges+=1;
            
        }
        int component=0;
        for(int i=0;i<n;i++){
            if(vis[i]==false){
                component+=1;
                dfs(i,vis,adj);
            }
        }
        cout<<component;
        if(edges<n-1){
            return -1;
        }
        int redundant=edges-((n-1)-(component-1));
        if(redundant>=component-1){
            return component-1;
        }
        return -1;
        
        
    }
};