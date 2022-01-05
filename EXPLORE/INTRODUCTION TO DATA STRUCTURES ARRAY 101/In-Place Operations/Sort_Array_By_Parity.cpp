#include <bits\stdc++.h>
using namespace std;

#define print_vector(a) \
    for (int i : a)     \
    cout << i << " "

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // vector<int> even;
        // vector<int> odd;
        for (int i : nums)
        {
            stable_partition(nums.begin(), nums.end(),[](auto a) { return a % 2 == 0; });
        }
        return nums;
    }
};

int main()
{
    vector<int> test1 = {3,1,2,4};
    vector<int> test2 = {0};
    Solution a;
    a.sortArrayByParity(test1);
    print_vector(test1);
    cout << endl;
    a.sortArrayByParity(test2);
    print_vector(test2);
    cout << endl;
    return 0;
}