#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for (int i=0; i< arr.size();i++){
            if (arr[i]==0){ 
                arr.insert(arr.begin()+i+1,0);
                arr.pop_back();
                i++;
            }
        }
    }
};

int main()
{
    vector<int> test1 = {1, 0, 2, 3, 0, 4, 5, 0};
    vector<int> test2 = {1, 2, 3};
    Solution a;
    a.duplicateZeros(test1);
    a.duplicateZeros(test2);
    return 0;
}