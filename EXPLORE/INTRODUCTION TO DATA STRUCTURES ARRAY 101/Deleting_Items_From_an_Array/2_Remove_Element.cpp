#include <bits\stdc++.h>
using namespace std;

#define print_vector(a) for(int i : a) cout<<i<<" "

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size()-1;
        int index = nums.size()-1;
        int count = 0;
        
        for(int i = index; i >= 0; i--){    
            if(nums[length] == val){    
                length--;
                count--;
            }
            else if(nums[i] == val){   
                nums[i] = nums[length]; 
                length--;                
                count--;
            }
            count++;
        }
        
        return count;
    }
};


int main()
{
    vector <int> test1 = {3,2,2,3};
    int val1 = 3;
    vector <int> test2 = {0,1,2,2,3,0,4,2};
    int val2 = 2;
    Solution a;
    cout<<a.removeElement(test1,val1)<<endl;
    print_vector(test1);
    cout<<endl;
    cout<<a.removeElement(test2,val2)<<endl;
    print_vector(test2);
    return 0;
}