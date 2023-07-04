void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
int i, k, j, l;
i=0;
j=0, k=0;
int arr[m+n+1];
while(i<m && j <n)
{
    if(nums1[i]<nums2[j])
    {
        arr[k]=nums1[i];
        i++;
    }
    else
    {
        arr[k]=nums2[j];
        j++;
    }
    k++;
}
if (i>=m)
      {
        while (j<n)
        {arr[k]=nums2[j]; j++; k++;}
      }
if(j>=n) 
      {
        while (i<m)
        {arr[k]=nums1[i]; i++; k++;}
      }
for ( l = 0; l < m+n; l++)
    {
        nums1[l]=arr[l];
    }
}