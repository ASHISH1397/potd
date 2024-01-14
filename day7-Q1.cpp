/*
QUESTION:


Remove Outermost Parentheses

  A valid parentheses string is either empty "", "(" + A + ")", or A + B, where A and B are valid parentheses strings, and + represents string concatenation.

For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings.
A valid parentheses string s is primitive if it is nonempty, and there does not exist a way to split it into s = A + B, with A and B nonempty valid parentheses strings.

Given a valid parentheses string s, consider its primitive decomposition: s = P1 + P2 + ... + Pk, where Pi are primitive valid parentheses strings.

Return s after removing the outermost parentheses of every primitive string in the primitive decomposition of s.

 

Example 1:

Input: s = "(()())(())"
Output: "()()()"
Explanation: 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".
Example 2:

Input: s = "(()())(())(()(()))"
Output: "()()()()(())"
Explanation: 
The input string is "(()())(())(()(()))", with primitive decomposition "(()())" + "(())" + "(()(()))".
After removing outer parentheses of each part, this is "()()" + "()" + "()(())" = "()()()()(())".
Example 3:

Input: s = "()()"
Output: ""
Explanation: 
The input string is "()()", with primitive decomposition "()" + "()".
After removing outer parentheses of each part, this is "" + "" = "".

TIME COMPLEXITY:

The code iterates through each character in the input string s once.
Inside the loop, it performs constant-time operations.
Therefore, the overall time complexity is O(n), where n is the length of the input string.

SPACE COMPLEXITY:
The code uses a constant amount of extra space (string str, integer count).
The space required is independent of the input size.
Therefore, the overall space complexity is O(1).

CODE:
*\


 class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string str;

        for(auto p : s) {

            if(p == '(') {

                if(count > 0) {
                    str = str + '(';
                }

                count++;
            }

            else {

                if(count > 1) {
                    str = str + ')';
                }
                
                count--;
            }
        }
        return str;
    }
};
