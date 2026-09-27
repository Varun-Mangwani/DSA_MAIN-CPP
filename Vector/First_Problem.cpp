#include <iostream>
#include <vector>
using namespace std;
class Solution
{

public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < (int)nums.size(); i++)
        {
            for (int j = i + 1; j < (int)nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    cout << i << "," << j;
                    vector<int> result;
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return vector<int>();
    }
};

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution s;
    s.twoSum(nums,target);
    return 0;
}
