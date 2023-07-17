/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int** nums, int numsSize, int* numsColSize, int* returnSize){
int count[1002], i, j, count2=0;
int *ans= (int *)malloc(1001*sizeof(int));
for(i=0;i<1001;i++)
{
  count[i]=0;
}
for(i=0;i<numsSize;i++)
{
    for(j=0;j<numsColSize[i];j++)
    {
      count[nums[i][j]]++;
    }
}
j=0;
for(i=0;i<1001;i++)
{
  if(count[i]==numsSize)
  {
    ans[j]=i;
    count2++;
    j++;
  }
  
}
* returnSize = count2;
return ans;

}