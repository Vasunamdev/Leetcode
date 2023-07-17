/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** sortPeople(char ** names, int namesSize, int* heights, int heightsSize, int* returnSize){
  *returnSize=  namesSize;
    int i, j=0;
 char** arr = (char**)malloc(heightsSize * sizeof(char*));
    for (i = 0; i < heightsSize; i++)
        arr[i] = (char*)malloc(22 * sizeof(char));

  int reverse[100002];
  for (i = 0; i < 100001; i++)
  {
      reverse[i]=-1;
  }
  for (i = 0; i < heightsSize; i++)
  {
      reverse[heights[i]]=i;
  }
  for (i = 100000; i >=0; i--)
  {
      if(reverse[i]!=-1)
      {
         strcpy(arr[j], names[reverse[i]]);
         j++;
      }   
  }
  return arr;
}