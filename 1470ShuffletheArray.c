/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
   * returnSize=numsSize;
int *ans = (int*)malloc(numsSize * sizeof(int));
int j=0, k=n, i;

for (i=0; i< numsSize; i++)
{
    if(i%2==0)
    {
        ans[i] = nums[j];
        j=j+1;
    }
    else
    {
        ans[i] = nums[k];
        k=k+1;
    }
}
return ans;
}