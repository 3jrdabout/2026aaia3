//weel02-3.cpp 學習計畫 Basic第一題
//LeetCode 1786. Merge Strings Alternately
//上週教 字串的長度 .length()
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int N1 = word1.length(), N2 = word2.length(); //字串的長度
        string ans; //用來放答案的字串
        for (int i=0; i < max(N1,N2); i++){//逐一檢查
            if (i < N1) ans += word1[i]; //i如果沒有超過範圍,就插入word1[i]
            if (i < N2) ans += word2[i]; //i如果沒有超過範圍,就插入word2[i]
        }
        return ans; //答案的字串在這裡
    }
};
