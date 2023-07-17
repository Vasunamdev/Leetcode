// question is misleading.
int minimizedStringLength(char * s){
int ans, i, len=strlen(s), count=0;
bool a[27];
for(i=0;i<27;i++)
{
    a[i]=0;
}
for(i=0;i<len;i++)
{
    a[s[i]-'a']++;
}
for(i=0;i<27;i++)
{
    if(a[i]!=0)
    count++;
}

return count;

}