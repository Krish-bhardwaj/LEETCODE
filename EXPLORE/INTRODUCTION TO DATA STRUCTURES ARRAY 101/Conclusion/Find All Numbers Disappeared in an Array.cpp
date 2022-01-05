#include <bits\stdc++.h>
using namespace std;

#define print_vector(a) \
    for (int i : a)     \
    cout << i << " "

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        unordered_set<int> n;
        for (int &i : nums)
            n.insert(i);
        int N = nums.size();
        vector<int> result;
        for (int i = 1; i <= N; i++)
            if (n.find(i) == n.end())
                result.emplace_back(i);
        return result;
    }
};
int main()
{
    vector<int> test1 = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> test2 = {1, 1};
    Solution a;
    a.findDisappearedNumbers(test1);
    print_vector(test1);
    cout << endl;
    a.findDisappearedNumbers(test2);
    print_vector(test2);
    cout << endl;
    return 0;
}