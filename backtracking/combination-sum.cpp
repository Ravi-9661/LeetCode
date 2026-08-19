class Solution {
public:
    void helper(vector<int>&candidates,vector<int>ans,vector<vector<int>>&finalans,int idx,int target){
        if(target==0){
            finalans.push_back(ans);
            return;
        }
        if(target<0) return;
        for(int i=idx;i<candidates.size();i++){
            ans.push_back(candidates[i]);
            helper(candidates,ans,finalans,i,target-candidates[i]);
            ans.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ans;
        vector<vector<int>>finalans;
        helper(candidates,ans,finalans,0,target);
        return finalans;  
    }
};