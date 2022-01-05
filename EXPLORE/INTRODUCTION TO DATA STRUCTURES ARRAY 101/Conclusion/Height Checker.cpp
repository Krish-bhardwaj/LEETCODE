#include <bits\stdc++.h>
using namespace std;

#define print_vector(a) \
    for (int i : a)     \
    cout << i << " "

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sorted_heights{heights};
        sort(sorted_heights.begin(), sorted_heights.end());
        int c = 0;
        for (int i = 0; i < heights.size(); ++i) {
            c += static_cast<int>(heights[i] != sorted_heights[i]);
        }
        return c;
    }
};

int main()
{
    vector<int> test1 = {1,1,4,2,1,3};
    vector<int> test2 = {5,1,2,3,4};
    vector<int> test3 = {1,2,3,4,5};
    Solution a;
    cout<<a.heightChecker(test1)<<endl;
    print_vector(test1);
    cout << endl;
    cout<<a.heightChecker(test2)<<endl;;
    print_vector(test2);
    cout << endl;
    cout<<a.heightChecker(test3)<<endl;;
    print_vector(test3);
    cout << endl;
    return 0;
}