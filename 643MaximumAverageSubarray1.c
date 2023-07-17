double findMaxAverage(int* nums, int numsSize, int k){
int i, sum=0, start=0, end, total;
double answer;
for (i = 0; i < k; i++)
  {
     sum+=nums[i];
  }
  end=k-1;
  total=sum;
  while(end<numsSize-1)
  {   end++;
      sum =sum  +nums[end]-nums[start];
      start++;
      if(sum>total)
      total=sum;
  }

  answer=(double)total/(double)k;
  return answer;
}