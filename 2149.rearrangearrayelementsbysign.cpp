class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int postive=0,negative=1;
        vector<int>ans (nums.size());
        for(int i =0;i<nums.size();i++){
            if(nums[i]<0){
                ans[negative]=nums[i];
                negative+=2;
            }
            else{
                ans[postive]=nums[i];
                postive+=2;
            }
        }
   return ans;  }
};