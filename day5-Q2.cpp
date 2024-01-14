/* 
Question: Valid Anagram
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false

COMPLEXITY:
Time Complexity:

The first two loops for counting frequencies run in O(N) time, where N is the length of the longer string between s and t.
The third loop that checks if all frequencies are zero also runs in O(N) time.
Therefore, the overall time complexity is O(N).

Space Complexity:

The space complexity is O(C), where C is the number of distinct characters in the longer of the two strings (s or t).
Your provided code is an efficient way to check if two strings are anagrams by using a character frequency map.

*\
class Solution {
public:
bool isAnagram(string s, string t) {
        unordered_map<char, int> freq;
    for (int i = 0; i < s.length(); i++)
        freq[s[i]]++;
 
    for (int i = 0; i < t.length(); i++)
        freq[t[i]]--;

    for(auto x: freq){
        if(x.second!=0) return false;
    }
