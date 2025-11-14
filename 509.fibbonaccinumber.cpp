class Solution {
public:
    int fib(int a){
    if(a<=2&& a>0){
return 1;
    }else if(a<0){return 0;}
    
    return fib(a-2)+fib(a-1);
}
};