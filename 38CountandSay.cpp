class Solution {
public:
    string countAndSay(int n) {
       int i, count,j, len;
       string s="1", ans="";
       if(n==1) return s;
       for(i=2; i<=n ; i++)
       {
           len = s.length();
           count=1;
           for(j=0; j<len ; j++)
           {
             if(s[j]!=s[j+1])
             {
                 ans+=to_string(count);
                 ans+=s[j];
                 count=1;
             }
             else 
             count++;
           }
    
           s=ans;
           ans="";
       
       }
       return s;
    }
};