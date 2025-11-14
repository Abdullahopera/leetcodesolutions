class Solution {
public:
bool columncheck(int target, vector<vector<int>> &matrix,int row){
int n=matrix[0].size(),st=0,end=n-1;
while(st<=end){
    int mid=st+(end-st)/2;
if(target == matrix[row][mid])
{
    return true;
}else if (target>=matrix[row][mid]){
    st=mid+1;
}else{end=mid-1;}
}
return false;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(),n=matrix[0].size();
        int sr=0,er=m-1;
while(sr<=er){

int mid = sr+(er-sr)/2;
if(target>=matrix[mid][0]&&target<=matrix[mid][n-1]){
    return columncheck(target,matrix,mid);
}else if(target >= matrix[mid][n-1]){
    sr=mid+1; 
}else{
    er=mid-1;
}

}


  return false;  }
};