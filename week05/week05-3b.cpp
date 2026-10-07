// week05-3b.cpp 學習計畫 Built-in Functions
// LeetCode 58. Length of Last Word 最後一個單字的長度
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); // string字串stream串流
        string now;         // 現在字串
        while (ss >> now) { // 很像今天week05-1教的while(cin>>s1)
            // 什麼都不做就會一直讀到最後那個字
        }
        return now.length(); // 現在字串的長度
    }
};
