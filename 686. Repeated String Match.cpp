class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int i, lenA=a.length(), lenB=b.length(), val;
        if(lenA>lenB)
        {
            for(i=0;i<lenA-lenB+1;i++)
            if(b==a.substr(i, lenB))
            return 1;
        }
        string staA=a;
        int repeat=lenB/lenA;
        int count=1;
        for(i=0;i<repeat+2;i++)
        {
            if (a.find(b) != string::npos)
              return count;
              else

              {
                a+=staA;
                count++;
              }
        }
        return -1;
    }
};