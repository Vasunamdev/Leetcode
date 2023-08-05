class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
          int i=0, mid, len=nums.size(),j=len-1;
        while(i<=j)
        {
            mid=(i+j)/2;
            if(target==nums[mid])
            
            return mid;
           
            else if(target<nums[mid])
            j=mid-1;
            else
            i=mid+1;
        }
        
        return i;
    }
    
};