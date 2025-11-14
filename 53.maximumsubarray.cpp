class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum1=0,sum2 = INT_MIN;
        for(int val : nums){
            sum1= sum1 + val;
            sum2 = max(sum1,sum2);
            if(sum1<0){
                sum1=0;
            }
        }
  return sum2;  }
};