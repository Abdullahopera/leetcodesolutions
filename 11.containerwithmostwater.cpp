class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxans=0,lp=0,rp=height.size()-1;
        while(lp<rp){
int ht=min(height[lp],height[rp]);
int wth = rp-lp, crun =wth*ht;
maxans= max(crun,maxans);
height[lp] < height[rp] ? lp++ : rp--;


        }
        return maxans;
    }
};