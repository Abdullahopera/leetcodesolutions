class Solution {
public:
set<vector<int>>s;
void alcomb(vector<int>& arr,int target ,int i,vector<vector<int>>& ans,vector<int> &combin){
    if(i==arr.size()||target<0){return;}
    if(target==0){if(s.find(combin)==s.end()){ans.push_back(combin);s.insert(combin);}
    return;}
    combin.push_back(arr[i]);
    alcomb(arr,target-arr[i],i,ans,combin);
    combin.pop_back();
    alcomb(arr,target,i+1,ans,combin);

}
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector <vector<int>> ans;
        vector<int> combin;
alcomb(arr,target,0,ans,combin);
return ans;

    }};