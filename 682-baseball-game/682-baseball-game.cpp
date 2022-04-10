#include<ctype.h>
class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> ans;
        // if(ops[0][0]=='-'){
        //     int num=0;
        //     for(int i=1;i<ops[0].size();i++){
        //         num=num*10+ops[0][i];
        //     }
        //     cout<<-1*num<<"*";
        //     ans.push_back(-1*num);
        // }
        // else{
        //     int num=0;
        //     for(int i=1;i<=ops[0].size();i++){
        //         num=num*10+ops[0][i];
        //     }
        //     cout<<num<<"*";
        //     ans.push_back(num);
        // }
        // if(ops[1][0]=='-'){
        //     int num=0;
        //     for(int i=1;i<ops[0].size();i++){
        //         num=num*10+ops[1][i];
        //     }
        //     cout<<-1*num<<"*";
        //     ans.push_back(-1*num);
        // }
        // else{
        //     int num=0;
        //     for(int i=1;i<=ops[0].size();i++){
        //         num=num*10+ops[1][i];
        //     }
        //     cout<<num<<"*";
        //     ans.push_back(num);
        // }
        for(string x:ops){
            
            if(x=="C"){
                ans.pop_back();
                
            }
            else if(x=="D"){
                
                int temp;
                temp=2*ans[ans.size()-1];
                cout<<ans[ans.size()-1]<<"&";
                cout<<temp<<"*";
                ans.push_back(temp);
            }
            else if(x=="+"){
                int a=ans[ans.size()-2];
                int b=ans[ans.size()-1];
                int temp=a+b;
               
                ans.push_back(temp);
            }
            else{
                ans.push_back(stoi(x));
            }
        }
        int sum=0;
        for(auto x:ans){
            cout<<x<<"+";
            sum+=x;
        }
        return sum;
        
    }
};