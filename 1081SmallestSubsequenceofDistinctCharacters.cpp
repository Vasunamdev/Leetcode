class Solution {
public:
    string smallestSubsequence(string s) {
        int len=s.length(), i;
    vector<int> LastIndex(26, 0);

    for(i=0;i<len;i++)
    LastIndex[s[i]-'a']=i;

    vector<bool> Taken(26, false);
    stack<char> st;

     for(i=0; i<len; i++)
     {
        int curr=s[i]-'a';
        if(Taken[curr])
        continue;
        while(st.size()>0 && st.top()>s[i] && i<LastIndex[st.top()-'a'])
        {
            Taken[st.top()-'a'] = false;
            st.pop();
        }
        st.push(s[i]);
        Taken[curr]=true;
     }
     string res="";
     while(st.size()>0)
     {
         res+=st.top();
         st.pop();
     }
     reverse(res.begin(), res.end());
     return res;
    }
};