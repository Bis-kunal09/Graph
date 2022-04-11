class Solution {
public:
    void reverse(vector<int>& arr,int l,int e ){
        while(l<e){
            swap(arr[l],arr[e]);
            l++;
            e--;
        }
    }
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int row=grid.size();
        int col=grid[0].size();
        int p=k;
        while(k--){
            vector<int> hold;
            for(int i=0;i<row;i++){
                hold.push_back(grid[i][col-1]);
            }
        
            
            reverse(hold,0,row-2);
            reverse(hold,0,row-1);
            for(int x:hold){
                cout<<x<<"^";
            }
            for(int i=0;i<row;i++){
                for(int j=col-1;j>0;j--){
                    grid[i][j]=grid[i][j-1];
                }
            }
            for(int i=0;i<row;i++){
                grid[i][0]=hold[i];
            }
        }
        return grid;
        
        
    }
};