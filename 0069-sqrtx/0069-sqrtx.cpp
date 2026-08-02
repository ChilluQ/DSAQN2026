class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;

      long long low=1;
      long long high=x;
      int ans=0;
      while(high>=low){
        long long mid=(high+low)/2;
        if(mid*mid==x){
            return mid;
        }
        else if(mid*mid<x){
            ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
      }
      return ans;
    }
};