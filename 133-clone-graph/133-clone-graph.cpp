/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*,Node*> m;
    Node* dfs(Node* node){
       
        if(m.find(node)!=m.end()){
            return m[node];
        }
        Node* root=new Node(node->val);
        m[node]=root;
        for(auto x: node->neighbors){
            root->neighbors.push_back(dfs(x));
        }
        return root;
    }
    Node* cloneGraph(Node* node) {
         if(node==NULL){
            return node;
        }
        return dfs(node);
        
        
    }
};