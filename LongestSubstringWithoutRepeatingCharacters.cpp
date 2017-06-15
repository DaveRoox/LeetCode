#include <iostream>
#include <string>

using namespace std;

class Solution {
    private:
        struct SubString {
            int startIndex, endIndex, length;
        };
    
        int in(const SubString &ss, const string &str, const char c) {
            for(int i = ss.endIndex; i >= ss.startIndex; i--)
                if(str[i] == c)
                    return i;
            return -1;
        }
    
    public:
        int lengthOfLongestSubstring(string s) {
            
            if(s == "")
                return 0;
            
            SubString final, tmp;
            final.startIndex = final.endIndex = 0;
            final.length = 1;
            tmp = final;
            
            for(int idx, k = 1; k < s.length(); k++) {
                idx = in(tmp, s, s[k]);
                tmp.endIndex = k;
                if(idx == -1) {
                    if(final.length < ++tmp.length)
                        final = tmp;
                }
                else {
                    tmp.startIndex = idx + 1;
                    tmp.length = tmp.endIndex - tmp.startIndex + 1;
                }
            }
            return final.length;
        }
};

int main(int argc, const char * argv[]) {
    string input = "abcabcbb";
    cout << "The longest substring without repeating characters in '" << input << "' has a length of " << Solution().lengthOfLongestSubstring(input) << endl;
    return 0;
}
