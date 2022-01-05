#include <bits\stdc++.h>
using namespace std;

#define print_vector(a) for(int i : a) cout<<i<<" "

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator i;
        sort(nums.begin(), nums.end());
        i = unique(nums.begin(), nums.begin() + nums.size());
        nums.resize(distance(nums.begin(), i));
        return nums.size();
    }
};


int main()
{
    vector <int> test1 = {1,1,2};
    vector <int> test2 = {0,0,1,1,1,2,2,3,3,4};
    Solution a;
    cout<<a.removeDuplicates(test1)<<endl;
    print_vector(test1);
    cout<<endl;
    cout<<a.removeDuplicates(test2)<<endl;
    print_vector(test2);
    return 0;
}