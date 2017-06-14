#include <iostream>
#include <vector>
#define forv(i, p, n) for(int i = (p); (i) < (n); (i)++)

using namespace std;

class Solution {
  public:
      vector<int> twoSum(vector<int>& nums, int target) {
          forv(i, 0, nums.size() - 1)
            forv(j, i + 1, nums.size())
              if(nums[j] == target - nums[i])
                  return vector<int>{i, j};
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
