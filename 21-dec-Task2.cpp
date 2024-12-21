class Solution {
  public:
    int gcd(int a, int b) {
        if(b==0|| a==b){
            return a;
        }
        else if(a==0){
            return b;
        }
        else if(a>b){
            gcd(a%b,b);
        }
        else{
            gcd(a,b%a);
        }
    }
};