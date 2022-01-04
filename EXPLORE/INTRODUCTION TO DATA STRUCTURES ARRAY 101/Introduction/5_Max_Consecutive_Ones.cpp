#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int lm = 0;
        int cm = 0;
        for(int i : nums){
            if(i)
                cm++;
            else
            {
                lm = max(lm, cm);
                cm = 0;
            }
        }
        return max(lm, cm);
        
    }
};

int main()
{
    vector<int> test = {1,0,1,1,1,0,0,0,1,1};
    Solution s;
    cout<<s.findMaxConsecutiveOnes(test)<<endl;
}