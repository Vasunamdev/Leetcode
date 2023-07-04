int findKthLargest(int* nums, int numsSize, int k){
int list[20003], remain, ans, i;
for(i=0; i<20003; i++)
{
    list[i]=0;
}
for(i=0; i<numsSize; i++)
{
   
   list[10000 + nums[i]]++;
   
}
remain=k;
for(i=20002; i>=0; i--)
{
    if(list[i]!=0)
    {
        remain -= list[i];
        if(remain<=0)
        {
           
           ans=i-10000;
          
           break;
        }
        
    }
}
return ans;
}