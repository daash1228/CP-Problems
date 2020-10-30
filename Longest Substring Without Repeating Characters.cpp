class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0,end=0,m=0;
        unordered_set<char>st;
        while(end<s.length()){
            if(st.find(s[end])==st.end()){
                st.insert(s[end]);
                end++;
                m=max(m,(end-start));
            }
            else{
                st.erase(s[start]);
                start++;
            }
        }
        return m;
    }
};
