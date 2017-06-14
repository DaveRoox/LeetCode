#include <iostream>
#include <string>

using namespace std;

class Solution {
    public:
        string getHint(string secret, string guess) {
            
            int cows = 0, bulls = 0, histogram[10] = {0};
            for(auto c : secret)
                histogram[c - '0']++;
            
            for(int i = 0; i < guess.length(); i++) {
                if(guess[i] == secret[i])
                    bulls += 1;
                if(histogram[guess[i] - '0'] != 0) {
                    histogram[guess[i] - '0'] -= 1;
                    cows += 1;
                }
            }
            
            return std::to_string(bulls) + "A" + std::to_string(cows - bulls) + "B";
        }
};

int main(int argc, const char * argv[]) {
    
    string secret = "1807";
    string guess = "7810";
    
    cout << Solution().getHint(secret, guess) << endl;
    return 0;
}
