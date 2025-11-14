class Solution {
public:
int binsearch(vector<int>&nums,int target,int st,int end){
     if (st > end) 
           return -1;
    int mid = st+(end-st)/2;
       if(target==nums[mid]){return mid;}
      else if(nums[mid]>target){return binsearch(nums,target,st,mid-1);}
       else{
        return binsearch(nums,target,mid+1,end);
       }
      }

    int search(vector<int>& nums, int target) {
       int st=0,end = nums.size()-1;
       return binsearch(nums,target,st,end);}
     
};