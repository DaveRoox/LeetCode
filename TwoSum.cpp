#include <iostream>
#include <vector>
#include <unordered_map>
#define forv(i, p, n) for(int i = (p); (i) < (n); (i)++)

using namespace std;

class Solution {
    public:
        vector<int> twoSum(const vector<int>& nums, int target) {
            unordered_map<int, int> missings;
            for(int i = 0; i < nums.size(); i++) {
                auto &n = nums[i];
                if(missings.find(n) != missings.end())
                    return vector<int>{missings[n], i};
                missings[target - n] = i;
            }
            return vector<int>();
        }
};

int main(int argc, const char * argv[]) {

   vector<int> v = {15, 2, 11, 7};
   vector<int> results = Solution().twoSum(v, 9);
   
   if(!results.empty())
        cout << results[0] << " " << results[1] << endl;
    else
        cout << "no solutions.\n";
        
   return 0;
}
