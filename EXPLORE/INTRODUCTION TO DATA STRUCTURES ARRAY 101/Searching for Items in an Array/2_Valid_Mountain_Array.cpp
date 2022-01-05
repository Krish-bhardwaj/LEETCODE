#include <bits\stdc++.h>
using namespace std;

#define print_vector(a) \
    for (int i : a)     \
    cout << i << " "

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
       int len = arr.size();
        if(len < 3)
            return false;
        
        int index = 0;
        int count1 = 0;
        int count2 = 0;
    
            while(index + 1 < len && arr[index] < arr[index + 1]){
                index++;
                count1++;
            }
            while(index + 1 < len && arr[index] > arr[index + 1]){
                index++;
                count2++;
            }
       
        if(count1 > 0 && count2 > 0)
            return (count1 + count2) == len - 1;
        else
            return false;
    }
};


int main()
{
    vector<int> test1 = {2,1};
    vector<int> test2 = {3,5,5};
    vector<int> test3 = {0,3,2,1};
    Solution a;
    cout << a.validMountainArray(test1) << endl;
    print_vector(test1);
    cout << endl;
    cout << a.validMountainArray(test2) << endl;
    print_vector(test2);
    cout << endl;
    cout << a.validMountainArray(test3) << endl;
    print_vector(test3);
    cout << endl;

    return 0;
}