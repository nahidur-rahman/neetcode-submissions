class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp1, mp2;
        int l1 = s.length();
        int l2 = t.length();
        if(l1 != l2)
            return false;

        for(int i = 0; i < l1; i++) {
            // if(!mp1[s[i]])
                mp1[s[i]]++;
            // if(!mp2[t[i]])
                mp2[t[i]]++;
        }

        return (mp1 == mp2);
    }
};
