#include <iostream>
#include <string>

using namespace std;

class Solution {
    
    public:
        string getHint(string secret, string guess) {
            
            int cows = 0, bulls = 0, histogram[10] = {0};

            for(int i = 0; i < secret.length(); histogram[secret[i++] - '0']++)
                if(secret[i] == guess[i])
                    bulls++;

            for(int i = 0; i < guess.length(); i++)
                if(histogram[guess[i] - '0']) {
                    histogram[guess[i] - '0']--;
                    cows++;
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
