#include <iostream>
#include <string>

using namespace std;

class Solution {
    
    public:
        int lengthOfLongestSubstring(string s) {
            
            if(s == "")
                return 0;
            
            int start = 0, length = 0, tmpLength;
            unordered_map<char, int> m;
            char c;
            
            for(int k = 0, size = s.length(); k < size; k++) {
                
                c = s[k];
                
                if(m.find(c) != m.end() && m[c] >= start)
                    start = m[c] + 1;
                
                m[c] = k;
                tmpLength = k - start + 1;
                
                if(tmpLength > length)
                    length = tmpLength;
            }
            
            return length;
        }
};

int main(int argc, const char * argv[]) {
    string input = "abcabcbb";
    cout << "The longest substring without repeating characters in '" << input << "' has a length of " << Solution().lengthOfLongestSubstring(input) << endl;
    return 0;
}
