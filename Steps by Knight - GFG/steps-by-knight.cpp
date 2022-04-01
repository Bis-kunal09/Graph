// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    vector<vector<int>> board(N+1,vector<int>(N+1,-1));
	    queue<pair<int,int>> q;
	    int ix=KnightPos[0];
	    int iy=KnightPos[1];
	    q.push({ix,iy});
	    board[ix][iy]=0;
	    int fx=TargetPos[0];
	    int fy=TargetPos[1];
	    int dx[]={2,2,-2,-2,-1,-1,1,1};
	    int dy[]={1,-1,1,-1,-2,2,2,-2};
	    while(!q.empty()){
	        int x=q.front().first;
	        int y=q.front().second;
	        q.pop();
	        for(int i=0;i<8;i++){
	            int tx=x+dx[i];
	            int ty=y+dy[i];
	            if(tx<=0||tx>N||ty<=0||ty>N||board[tx][ty]!=-1){
	                continue;
	            }
	            board[tx][ty]=board[x][y]+1;
	            if(tx==fx&&ty==fy){
	                return board[tx][ty];
	            }
	            q.push({tx,ty});
	            
	        }
	       
	    }
	    return 0;
	    
	}
};

// { Driver Code Starts.
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
}  // } Driver Code Ends