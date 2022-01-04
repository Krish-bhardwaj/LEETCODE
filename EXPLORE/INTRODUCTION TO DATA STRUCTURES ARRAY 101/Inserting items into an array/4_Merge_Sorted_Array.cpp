#include <bits\stdc++.h>
using namespace std;

#define print_vector(a) for(int i : a) cout<<i<<" "

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        if (m == 0)
        {
            nums1 = nums2;
            return;
        }
        if (n == 0)
        {
            return;
        }
        int it = m + n - 1;
        int i1 = m - 1, i2 = n - 1;
        while (!(i1 == -1 || i2 == -1))
        {
            if (nums1[i1] > nums2[i2])
            {
                nums1[it] = nums1[i1];
                i1--;
            }
            else
            {
                nums1[it] = nums2[i2];
                i2--;
            }
            it--;
        }
        if (i1 == -1)
        {
            for (int i = 0; i < i2 + 1; i++)
            {
                nums1[i] = nums2[i];
            }
        }
    }
};

int main()
{
    vector<int> test1_arr_1 = {1, 2, 3, 0, 0, 0};
    vector<int> test1_arr_2 = {2, 5, 6};
    int m_1 = 3, n_1 = 3;
    vector<int> test2_arr_1 = {1};
    vector<int> test2_arr_2 = {};
    int m_2 = 1, n_2 = 0;
    vector<int> test3_arr_1 = {};
    vector<int> test3_arr_2 = {1};
    int m_3 = 0, n_3 = 1;
    Solution a;
    a.merge(test1_arr_1, m_1, test1_arr_2, n_1);
    print_vector(test1_arr_1);
    cout<<endl;
    a.merge(test2_arr_1, m_2, test2_arr_2, n_2);
    print_vector(test2_arr_1);
    cout<<endl;
    a.merge(test3_arr_1, m_3, test3_arr_2, n_3);
    print_vector(test3_arr_1);
    cout<<endl;
    return 0;
}