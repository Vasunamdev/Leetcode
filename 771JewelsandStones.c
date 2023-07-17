int numJewelsInStones(char * jewels, char * stones){
int count[150], i, j=strlen(jewels), s=strlen(stones), answer=0;
for(i=0;i<150;i++)
{
   count[i]=0;
}
for(i=0;i<j;i++)
{
   count[jewels[i]]++;
}
for(i=0;i<s;i++)
{
   if(count[stones[i]]!=0)
   answer++;
}
return answer;
}