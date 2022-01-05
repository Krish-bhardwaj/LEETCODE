#include <bits\stdc++.h>
using namespace std;

#define print_vector(a) \
    for (int i : a)     \
    cout << i << " "
    
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