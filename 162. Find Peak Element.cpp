class Solution {
public:
    int findPeakElement(vector<int>& nums) {
    int i, j=nums.size()-1, mid;
    if(j==0)
    return 0;
    if(nums[0]>nums[1])
    return 0;
    if(nums[j]>nums[j-1])
    return j;
    i=1;
    j=j-1;
    while(i<=j)
    {
        mid=i+(j-i)/2;
        if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])
        return mid;
        else if(nums[mid]<nums[mid+1])
        i=mid+1;
        else
        j=mid-1;

    }
    return -1;
    }
};