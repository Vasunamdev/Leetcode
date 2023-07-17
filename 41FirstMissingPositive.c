int firstMissingPositive(int* nums, int numsSize){
int i, totalsum=(numsSize*(numsSize+1))/2, temp;
for(i=0; i<numsSize; i++)
{
  if (nums[i] <= 0 || nums[i] > numsSize) {
            nums[i] = numsSize + 1;
        }
}
for(i=0; i<numsSize; i++)
{
    int num = abs(nums[i]);
        if (num > numsSize) {
            continue;
        }
        num--; 
        if (nums[num] > 0) { 
            nums[num] = -1 * nums[num];
        }
}
for (int i = 0; i < numsSize; i++) {
        if (nums[i] >= 0) {
            return i + 1;
        }
    }
    return numsSize+1;
}