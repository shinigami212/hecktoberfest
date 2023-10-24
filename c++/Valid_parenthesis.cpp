class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        map<char,char>m;
        m['{']=' ';
        m['[']=' ';
        m['(']=' ';
        m[']']='[';
        m['}']='{';
        m[')']='(';
        for(int i=0;i<s.length();i++)
        {
            if(st.empty())
            st.push(s[i]);
            else if(m[s[i]]==st.top())
            st.pop();
            else
            st.push(s[i]);
        }
        if(st.empty())
        return true;
        return false;
    }
};
