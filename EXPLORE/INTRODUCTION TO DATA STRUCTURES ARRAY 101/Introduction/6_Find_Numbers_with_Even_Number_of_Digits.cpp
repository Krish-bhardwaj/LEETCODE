#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int a = 0;
        for(int i : nums)
        {
            if((int)(log10(i) + 1) % 2 == 0){
                a++;
            }
        }
        return a;
    }
};

int main()
{
    vector<int> test1 = {555,901,482,1771};
    vector<int> test2 = {12,345,2,6,7896};
    Solution s;
    cout<<s.findNumbers(test1)<<endl;
    cout<<s.findNumbers(test2)<<endl;
    
}