#include <bits\stdc++.h>
using namespace std;

#define print_vector(a) \
    for (int i : a)     \
    cout << i << " "

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int i = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] != nums[j])
            {
                nums[++i] = nums[j];
            }
            
        }
        return i+1;
    }
};

int main()
{
    vector<int> test1 = {1,1,2};
    vector<int> test2 = {0,0,1,1,1,2,2,3,3,4};
    Solution a;
    cout<<a.removeDuplicates(test1)<<endl;
    print_vector(test1);
    cout << endl;
    cout<<a.removeDuplicates(test2)<<endl;;
    print_vector(test2);
    cout << endl;
    return 0;
}