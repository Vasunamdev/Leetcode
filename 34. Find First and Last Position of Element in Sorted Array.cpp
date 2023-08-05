class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> a(2, -1);
        int len = nums.size();
        if(len==0  || nums[0]>target || target>nums[len-1])
        return a;
        if(len==1 && target==nums[0])
        {
            a[0]=0;
            a[1]=0;
            return a;
        }
        int i=0, j=len-1, index=-1;
        while(i<=j)
        {
           int mid=(i+j)/2;
            if(target==nums[mid])
            {
              index=mid;
               break;
            }
           
            else if(target<nums[mid])
            j=mid-1;
            else
            i=mid+1;
        }
        cout << index;
        if (index==-1)
        return a;
        else
        {
            int start=index;
            int end=index;
            while(start>=0 && nums[start]==nums[index])
            start--;
             while(end<len && nums[end]==nums[index])
            end++;

            start++;
            end--;
            a[0]=start;
            a[1]=end;
            return a; 

        }
    }
};