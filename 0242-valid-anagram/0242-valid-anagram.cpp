class Solution {
public:
    bool isAnagram(string s, string t) {
        int chars[26] = {0};
        for(auto c : s) chars[c-'a']++;
        for(auto c : t) chars[c-'a']--;
        for(int i = 0; i < 26; i++){
            if(chars[i] != 0) return false;
        }
        return true;
    }
};