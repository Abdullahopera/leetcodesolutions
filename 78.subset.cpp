class Solution {
public:
void getallsubsets(vector<int> &nums,vector<int>&ans,int i ,vector<vector<int>>& subset){
    if(i==nums.size()){
 subset.push_back({ans});
return;
    }
    ans.push_back(nums[i]);
    getallsubsets(nums,ans,i+1,subset);
    ans.pop_back();
    getallsubsets(nums,ans,i+1,subset);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subset;
vector<int> ans;
getallsubsets(nums,ans,0,subset);
return subset;
    }
};