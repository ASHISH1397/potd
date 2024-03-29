/*
Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.
  
Complexity
Time complexity:O(N)
Space complexity:O(N)

  Code:
*/
  

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;

        unordered_map<int,int>map;

        for(int i=0;i<nums.size();i++){
            if(map.find(nums[i])!=map.end())
            count += map[nums[i]];
                
            map[nums[i]]++;
        }
        return count;
    }
};
