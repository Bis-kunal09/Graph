class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int row=board.size();
        int col=board[0].size();
        vector<vector<int>> s(row,vector<int>(col,0));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                s[i][j]=board[i][j];
            }
        }
        int dx[]={1,-1,0,0,1,1,-1,-1};
        int dy[]={0,0,1,-1,1,-1,1,-1};
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                int ones=0;
                for(int k=0;k<8;k++){
                    int tx=i+dx[k];
                    int ty=j+dy[k];
                    if(tx<0||tx>=row||ty<0||ty>=col){
                        continue;
                    }
                    if(s[tx][ty]==1){
                        ones++;
                    }
                    
                }
                if(s[i][j]==1){
                    if(ones<2||ones>3){
                        board[i][j]=0;
                    }
                    
                }
                else{
                    if(ones==3){
                        board[i][j]=1;
                    }
                }
            }
        }
        
    }
};