#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mp;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {

            if (mp.find(nums[i]) == mp.end())
            {
                mp[nums[i]] = i;
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {

            if (mp.find(target - nums[i]) != mp.end() && i != mp[target - nums[i]])
            {
                ans.push_back(i);
                ans.push_back(mp[target - nums[i]]);
                break;
            }
        }

        return ans;
    }
};

int main()
{

    return 0;
}
