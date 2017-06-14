#include <iostream>

using namespace std;

class Solution {
    public:
        int findComplement(int num) {
            int res = ~num, bits = 1;
            while(num >>= 1)
                bits += 1;
            return res & ((1 << bits) - 1);
        }
};

int main(int argc, const char * argv[]) {
    int input = 5;
    cout << Solution().findComplement(input) << endl;
    return 0;
}
