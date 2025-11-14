class Solution {
public:
bool ispalin(string s ){
    string s2=s;
    reverse(s2.begin(),s2.end());
    return s2==s;
}
void getallparts(string s,vector<string> & parti,vector<vector<string>> & ans){
    if(s.size()==0){
        ans.push_back(parti);
        return;
    }
    for(int i=0;i<s.size();i++){
        string part = s.substr(0,i+1);
        if(ispalin(part)){
            parti.push_back(part);
            getallparts(s.substr(i+1),parti,ans);
            parti.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> parti;
        getallparts(s,parti,ans);
        return ans;
    }
};