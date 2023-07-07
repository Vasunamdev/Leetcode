bool canBeEqual(int* target, int targetSize, int* arr, int arrSize){
int a[1002], i;
for(i=0;i<1002;i++)
{
    a[i]=0;
}
for(i=0;i<targetSize;i++)
{
    a[target[i]]++;
}
for(i=0;i<arrSize;i++)
{
    if(a[arr[i]]==0)
    return false;
    else
    a[arr[i]]--;
}
return true;
}