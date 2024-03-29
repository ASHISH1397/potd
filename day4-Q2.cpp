/* Question: Rotate String

Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.
 

Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true
Example 2:

Input: s = "abcde", goal = "abced"
Output: false

  TIME COMPLEXITY: O(N^2).
  SPACE COMPLEXITY: O(1).  *\

class Solution {
public:
    bool rotateString(string s, string goal) {

    for (int i = 0; i < s.size(); i++) {
        reverse(s.begin(),s.end()-1);
         reverse(s.begin(),s.end());

        if (s == goal) return true;
    }
        
        return false;
    }
};
