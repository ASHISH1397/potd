Question: Leetcode 169. Mazority Element

Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Complexity:

Time Complexity: O(n)
Space Complexity: O(1);

Code:

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;                                                //set count for finding maximum occuring element
        int element=nums[0];                                        //start from element 1st.
        for(int i=0;i<nums.size();i++){                             //start loop.
            if(count==0) element=nums[i];                           //when count is 0 then put nums[i] in element
            if(nums[i]==element) count++;                           //when nums[i] is element increase count. 
            else count--;                                           //when nums[i] is not element deacrese count. 
        }
        return element;
    }
};
