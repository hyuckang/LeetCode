class Solution {
public:
bool isAnagram(string s, string t)
{
    int s_alphabet[26] = {0}, t_alphabet[26] = {0};
    int s_sz = s.size(), t_sz = t.size();
    
    if(s_sz != t_sz) return false;

    for(int i=0; i<s_sz; i++) s_alphabet[s[i] - 'a']++;
    for(int i=0; i<t_sz; i++) t_alphabet[t[i] - 'a']++;

    for(int i=0; i<26; i++)
    {
        if(s_alphabet[i] != t_alphabet[i]) return false;
    }

    return true;
}
};