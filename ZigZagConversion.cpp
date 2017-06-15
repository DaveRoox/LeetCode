#include <iostream>
#include <string>

using namespace std;

class Solution {
    
    public:
        string convert(string s, int numRows) {
            
            if(numRows == 1)
                return s;
            
            int p = 2 * (numRows - 1);
            int k = (int)s.length() / p;
            int b = (int)s.length() - p * k;
            string result = "";
            
            for(int i = 0; i < numRows; i++) {
                for(int j = 0; j < k; j++) {
                    result += s[p * j + i];
                    if(i != 0 && i != (numRows - 1))
                        result += s[p * (j + 1) - i];
                }
                if(b > i) {
                    result += s[p * k + i];
                    if(p - b < i && i != (numRows - 1))
                        result += s[p * (k + 1) - i];
                }
            }
            
            return result;
        }
};

int main(int argc, const char * argv[]) {
    
    string input = "ABCDE";
    int numRows = 4;
    
    cout << Solution().convert(input, numRows) << endl;
    return 0;
}
