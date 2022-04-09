class Solution {
public:
    struct cmp {
        bool operator()(pair<int,int> &a,pair<int,int> &b) {
            return b.second < a.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> m;
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int j=0;
        for(auto x:m){
            pq.push({x.first,x.second});
           
            if(pq.size()>k){
                pq.pop();
               
            }
        }
        while(!pq.empty()){
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;
        
    }
};