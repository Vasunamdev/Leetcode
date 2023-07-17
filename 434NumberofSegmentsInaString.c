int countSegments(char * s){
int  i=0, len=strlen(s), count=0;
while(i<len)
{
    if(s[i]!=' ')
    {  count++;
       while(s[i]!=' ' && i!=len-1)
       {
          i++;
       }
    }
    
    i++;
}

return count;
}