#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
            nums[i] *= nums[i];
        sort(nums.begin(), nums.end());
        return nums;
    }
};

int main()
{
    vector<int> test1 = {-4,-1,0,3,10};
    vector<int> test2 = {-7,-3,2,3,11};
    Solution s;
    for (int i : s.sortedSquares(test1))
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for (int i : s.sortedSquares(test2))
    {
        cout<<i<<" ";
    }
}