bool isValid(char * s){
    int len=strlen(s), i, top=-1;
    bool answer=true;

char stack[len+1];
for(i=0;i<len+1;i++)
stack[i]=NULL;
for(i=0;i<len;i++)
{
    if(s[i]=='(' || s[i]=='[' || s[i]=='{')
    stack[++top]=s[i];

    else if(s[i]==')'&& top>=0 && stack[top]=='(' )
       stack[top--]=NULL;

    else if(s[i]=='}'&& top>=0 && stack[top]=='{')
       stack[top--]=NULL;

    else if(s[i]==']' && top>=0 && stack[top]=='[' )
       stack[top--]=NULL;
    
    else 
       {
           answer=false;
           break;
       }
}
if(top!=-1)
answer=false;
return answer;
}