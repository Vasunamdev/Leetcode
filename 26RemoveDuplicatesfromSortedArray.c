int removeDuplicates(int* nums, int numsSize){
    int i, unique=1 ;
    for(i=1; i< numsSize ; i++)
    {
      if(nums[i]!=nums[i-1])
      {
          nums[unique]= nums[i];
          unique++;
      }
    }
    return unique;
}