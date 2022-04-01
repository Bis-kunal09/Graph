class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n=image.size();
        int m=image[0].size();
        int oldColor=image[sr][sc];
        queue<pair<int,int>> q;
        q.push({sr,sc});
        int dx[]={1,-1,0,0};
        int dy[]={0,0,1,-1};
        vector<vector<int>> vis(n,vector<int>(m,0));
        vis[sr][sc]=1;
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            image[x][y]=newColor;
            
            for(int i=0;i<4;i++){
                int tx=x+dx[i];
                int ty=y+dy[i];
                if(tx<0||tx>=n||ty<0||ty>=m||image[tx][ty]!=oldColor||vis[tx][ty]!=0){
                    continue;
                }
                q.push({tx,ty});
                vis[tx][ty]=1;
                
            }
            
            
        }
        return image;
        
    }
};