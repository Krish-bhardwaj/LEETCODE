#include <bits\stdc++.h>
using namespace std;

#define print_vector(a) \
    for (int i : a)     \
    cout << i << " "

class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        int m = -1, temp;
        for (int i = arr.size() - 1; i >= 0; --i)
        {
            temp = arr[i];
            arr[i] = m;
            m = max(m, temp);
        }
        return arr;
    }
};

int main()
{
    vector<int> test1 = {17, 18, 5, 4, 6, 1};
    vector<int> test2 = {400};
    Solution a;
    a.replaceElements(test1);
    print_vector(test1);
    cout << endl;
    a.replaceElements(test2);
    print_vector(test2);
    cout << endl;
    return 0;
}