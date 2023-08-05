class Solution {
public:
    double myPow(double x, int n) {
         return answer(x,(long)n );
       
    }
    double answer(double x, long n)
    {
        if(n==0)
        return 1.0;
        if(n==1)
        return x;
        if (n<0)
        {
           x = 1 / x;
            n = -n;
        }
            
        double ans= myPow(x, n/2);
        if(n%2==0)
         ans=ans*ans;
         else
         ans=ans*ans*x;
    //  if(n<0)
    //  return 1/ans;
     return ans;
    }
};