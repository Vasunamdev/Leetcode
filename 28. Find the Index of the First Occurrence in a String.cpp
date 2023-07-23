class Solution {
public:
    int strStr(string haystack, string needle) {
       int i, j, k, ans, lenH=haystack.length(), lenN=needle.length();
       for(i=0; i<lenH; i++)
       {  k=i;
           for(j=0; j<lenN; j++)
           {   
               if(needle[j]!=haystack[k])
               break;
               k++;
           }
           if(j==lenN)
           return i;
       }
       return -1;
    }
};