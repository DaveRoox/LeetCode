#include <iostream>
#include <string>

using namespace std;

class Solution {
    
    private:
        struct SubString {
            int startIndex, endIndex, length;
        };
    
        int in(const SubString &ss, const string &str, const char c) {
            int toReturn = -1;
            for(int i = ss.startIndex; i <= ss.endIndex; i++)
                if(str[i] == c)
                    toReturn = i;
            return toReturn;
        }
    
    public:
        int lengthOfLongestSubstring(string s) {
            
            if(s == "")
                return 0;
            
            SubString final, tmp;
            final.startIndex = final.endIndex = 0;
            final.length = 1;
            tmp = final;
            
            for(int k = 1; k < s.length(); k++) {
                int idx = in(tmp, s, s[k]);
                if(idx == -1) {
                    tmp.endIndex = k;
                    tmp.length++;
                    if(final.length < tmp.length)
                        final = tmp;
                }
                else {
                    tmp.startIndex = idx + 1;
                    tmp.endIndex = k;
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
