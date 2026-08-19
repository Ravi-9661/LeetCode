class Solution {
public:
void Generate(int n , string s,vector<string>&ans,int open ,int close){
    if(close==n){
        ans.push_back(s);
        return;
    }
    if(open<n) Generate(n,s+'(',ans,open+1,close);
    if(close<open) Generate(n, s+')',ans,open,close+1);

}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        Generate(n,"",ans,0,0);
        return ans;

    }
};