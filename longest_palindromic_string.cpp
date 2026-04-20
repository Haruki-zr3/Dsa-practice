class Solution {
public:
    string expandFromCenter(const string &s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}
    string longestPalindrome(string s) {
        string result = "";
        for (int i = 0; i < s.size(); i++) {
            string p1 = expandFromCenter(s, i, i);
            string p2 = expandFromCenter(s, i, i + 1);
            if (p1.length() > result.length()) result = p1;
            if (p2.length() > result.length()) result = p2;
        }
        return result;
    }
};
