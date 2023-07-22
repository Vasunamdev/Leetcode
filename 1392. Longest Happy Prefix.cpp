class Solution {
public:
    string longestPrefix(string s) 
    {
       int i, len=s.length();
    vector<int> pi(len, 0);
    int j=0;
    pi[0]=0;
    for ( i = 1; i < len; i++)
    {
       while(j>0 && s[j]!=s[i])
       j = pi[j-1];

       if(s[j]==s[i])
       j = j+1;

       pi[i]=j;
    }
        
        return s.substr(0,j);
    }
};