#include <bits\stdc++.h>
using namespace std;

#define print_vector(nums) \
    for (int i : nums)     \
    cout << i << " "

class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int idx = n - 1, i, distinctCount = 0;
        while (idx >= 0)
        {
            distinctCount++;
            i = idx - 1;
            while (i >= 0 && nums[i] == nums[idx])
                i--;
            if (i == -1)
                return nums[n - 1];
            idx = i;
            if (distinctCount == 2)
                return nums[idx];
        }
        return -1;
    }
};

int mnumsin()
{
    vector<int> test1 = {3, 2, 1};
    vector<int> test2 = {1, 2};
    vector<int> test3 = {2, 2, 3, 1};
    Solution a;
    cout << a.thirdMax(test1) << endl;
    print_vector(test1);
    cout << endl;
    cout << a.thirdMax(test2) << endl;
    print_vector(test2);
    cout << endl;
    cout << a.thirdMax(test3) << endl;
    print_vector(test3);
    cout << endl;
    return 0;
}