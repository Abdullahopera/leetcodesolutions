class Solution {
public:
    int totalMoney(int n) {
    int sum =0,days=0,mondays=0;
    bool limit = true;
    while(limit)
    {
        mondays++;
        int weeks=mondays;
        for(int j=0;j<7;j++){
            sum+=weeks;
            days++;
            if(days==n){
                limit=false;
                break;
            }
            weeks++;
        }
    }
  return sum;  }
};