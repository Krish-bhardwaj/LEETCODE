#include <bits\stdc++.h>
using namespace std;

#define print_vector(a) \
    for (int i : a)     \
    cout << i << " "

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map <int, int> mp;
        for(int i = 0; i < arr.size(); i++)
        {
        	mp[arr[i]]++;
        	if(arr[i] != 0 && mp[arr[i] * 2] == 1)
        		return 1;
        	else if(arr[i] == 0 && mp[arr[i] * 2] > 1)
        		return 1;
            else if(arr[i] != 0 && arr[i] % 2 == 0 && mp[arr[i] / 2] == 1)
        		return 1;
        }
        return 0;
    }
};


int main()
{
    vector<int> test1 = {10, 2, 5, 3};
    vector<int> test2 = {7, 1, 14, 11};
    vector<int> test3 = {3, 1, 7, 11};
    Solution a;
    cout << a.checkIfExist(test1) << endl;
    print_vector(test1);
    cout << endl;
    cout << a.checkIfExist(test2) << endl;
    print_vector(test2);
    cout << endl;
    cout << a.checkIfExist(test3) << endl;
    print_vector(test3);
    cout << endl;

    return 0;
}