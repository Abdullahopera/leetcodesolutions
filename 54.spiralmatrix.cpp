class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n = mat.size(),m=mat[0].size();
        vector<int> ans;
        int srow=0,erow=n-1,scol=0,ecol=m-1;
       while(srow<=erow && scol<=ecol){
         for(int j=scol;j<=ecol;j++){
            ans.push_back(mat[srow][j]);
        }
        for(int j=srow+1;j<=erow;j++){
            ans.push_back(mat[j][ecol]);
        }
        for(int j=ecol-1;j>=scol;j--){
            if(srow==erow){break;}
            ans.push_back(mat[erow][j]);
        }
        for(int j=erow-1;j>=srow+1;j--){
            if(scol==ecol){break;}
            ans.push_back(mat[j][scol]);
        }
        srow++;erow--;scol++;ecol--;
     }

   return ans;   }
};