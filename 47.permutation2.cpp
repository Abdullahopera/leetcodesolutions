class Solution {
public:
void getall(vector<int> & nums,int i,vector<vector<int>> & ans){
    unordered_map<int,int> check;
    if(i==nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int j=i;j<nums.size();j++){
        
if(check.find(nums[j])!=check.end()){
    continue;
}check[nums[j]]=1;
        swap(nums[i],nums[j]);
        getall(nums,i+1,ans);
        swap(nums[j],nums[i]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        getall(nums,0,ans);
        return ans;
    }
};