class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1)
        return x;
        int i=1, j=x, mid;
        while(i<=j)
        {
            mid = i+(j-i)/2;
            if(mid==x/mid)
            return mid;
            else if (mid > x / mid) {
                j= mid - 1;
            }
            else {
                i = mid + 1;
            }
        }
        return j;
    }
};