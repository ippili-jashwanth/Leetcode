class Solution {
public:
    string removeKdigits(string num, int k) {
        string s = "";
        int i = 0;

        while (i < num.size()) {
            if (!s.empty() && k > 0 && s.back() > num[i]) {
                s.pop_back();
                k--;
            }
            else {
                s.push_back(num[i]);
                i++;
            }
        }

        // Remove remaining digits from the end
        while (k > 0 && !s.empty()) {
            s.pop_back();
            k--;
        }

        // Remove leading zeros
        int j = 0;
        while (j < s.size() && s[j] == '0') {
            j++;
        }

        string ans = s.substr(j);

        return ans.empty() ? "0" : ans;
    }
};