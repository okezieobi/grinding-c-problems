/*
You are given two strings word1 and word2.
Merge the strings by adding letters in alternating order,
starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

Example 1:
Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r

Example 2:
Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s

Example 3:
Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d

Constraints:
1 <= word1.length, word2.length <= 100
word1 and word2 consist of lowercase English letters.
*/
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int even_index = 0;
        int odd_index = 0;
        int min_str = min(word1.length(), word2.length());
        for (int i = 0; i < min_str * 2; i++) {
            if (i % 2 == 0) {
                result.push_back(word1[even_index]);
                even_index++;
            } else {
                result.push_back(word2[odd_index]);
                odd_index++;
            }
        }
        if (word1.length() == word2.length())
            return result;
        int max_str = max(word1.length(), word2.length());
        int remainder_str = max_str - min_str + result.length() - 1;
        for (int i = result.length() - 1; i < remainder_str; i++) {
            if (word1.length() > word2.length()) {
                result.push_back(word1[even_index]);
                even_index++;
            } else if (word2.length() > word1.length()) {
                result.push_back(word2[odd_index]);
                odd_index++;
            }
        }
        return result;
    }
};
