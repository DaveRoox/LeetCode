#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

class Solution {
    
    private:
        static const map<char, vector<char>> numberMap;
    
    public:
        vector<string> letterCombinations(string digits) {
            
            vector<string> result;
            
            if(digits.length() > 2) {
                char key = digits[0];
                digits.erase(digits.begin());
                const auto& subResult = letterCombinations(digits);
                for(auto c : Solution::numberMap.at(key))
                    for(auto d : subResult)
                        result.push_back(string(1, c) + d);
            }
            else if(digits.length() == 2)
                for(auto c : Solution::numberMap.at(digits[0]))
                    for(auto d : Solution::numberMap.at(digits[1]))
                        result.push_back(string(1, c) + d);
            else if(digits.length() == 1)
                for(auto c : Solution::numberMap.at(digits[0]))
                    result.push_back(string(1, c));
            
            return result;
        }
};

const map<char, vector<char>> Solution::numberMap = {
    {'2', {'a', 'b', 'c'}},
    {'3', {'d', 'e', 'f'}},
    {'4', {'g', 'h', 'i'}},
    {'5', {'j', 'k', 'l'}},
    {'6', {'m', 'n', 'o'}},
    {'7', {'p', 'q', 'r', 's'}},
    {'8', {'t', 'u', 'v'}},
    {'9', {'w', 'x', 'y', 'z'}}
};

int main(int argc, const char * argv[]) {
    
    string input = "4567";
    auto result = Solution().letterCombinations(input);
    for(auto val : result)
        cout << val << endl;
    
    return 0;
}
