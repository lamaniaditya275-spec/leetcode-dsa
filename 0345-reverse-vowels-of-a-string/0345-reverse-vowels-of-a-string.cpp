class Solution {
public:
    bool isVowel(char c) {
        c = toupper(c);
        return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

    string reverseVowels(string s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            while (left < right && !isVowel(s[left]))  left++;
            while (left < right && !isVowel(s[right])) right--;
            if (left < right) swap(s[left++], s[right--]);
        }
        return s;
    }
};   