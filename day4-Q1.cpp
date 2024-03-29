Question: Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

Complexity:
TIME COMPLEXITIES: O(nlogn).
SPACE COMPLEXITIES:O(1).

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

         sort(strs.begin(),strs.end());
       
        int a=strs.size();
       
        string n=strs[0];
        string m=strs[a-1];
        string ans="";
        
         for(int i=0;i<n.size();i++){
            if(n[i]==m[i]){ans+=n[i];}
            else break;
        }
        return ans;
    }
};
