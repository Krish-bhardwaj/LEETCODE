#include <bits\stdc++.h>
using namespace std;

#define print_vector(a) \
    for (int i : a)     \
    cout << i << " "

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int fast = 0, slow = 0;
        while (fast < nums.size())
        {
            if(nums[fast]){
                nums[slow++] = nums[fast];
            }
            fast++;
        }
        while (slow < nums.size())
        {
            nums[slow] = 0;
            slow++;
        }
    }
};

int main()
{
    vector<int> test1 = {0, 1, 0, 3, 12};
    vector<int> test2 = {0};
    Solution a;
    a.moveZeroes(test1);
    print_vector(test1);
    cout << endl;
    a.moveZeroes(test2);
    print_vector(test2);
    cout << endl;
    return 0;
}