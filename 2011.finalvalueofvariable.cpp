class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int n = op.size();
       int x=0;
for(int i = 0;i<n;i++){
    if(op[i]=="X++"){
        x++;
    }
    if(op[i]=="++X"){
        ++x;
    }
    if(op[i]=="--X"){
        --x;
    }
    if(op[i]=="X--"){
        x--;
    }
}
   return x; }
};