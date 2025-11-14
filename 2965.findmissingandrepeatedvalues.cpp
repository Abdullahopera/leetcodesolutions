class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int>s;
        vector<int>ans;
        int actualsum=0,a,n=grid.size(),b;
        for(int i =0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                actualsum+=grid[i][j];
                if(s.find(grid[i][j])!=s.end()){
                a=grid[i][j];
                ans.push_back(a);
                }
                s.insert(grid[i][j]);
            }
        }
        int expsum=(n*n)*(n*n+1)/2;
         b = expsum + a-actualsum;
        
        ans.push_back(b);
    return ans;}
};