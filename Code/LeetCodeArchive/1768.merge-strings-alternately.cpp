/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */

// @lc code=start
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len=word1.length()>=word2.length()? word2.length():word1.length(),
            index=0, outdex=0;
        string merged;
        for(int i=0; i<len*2; i++){
            if(i%2==0){
                merged+=word1[outdex++];
            }
            if(i%2==1){
                
                merged+=word2[index++];
            }
        }
        if(word1.length()>=word2.length()){
            
            merged+=word1.substr(index,word1.length());
        }
        else{
            merged+=word2.substr(outdex,word2.length());
        }
        return merged;
    }
};
// @lc code=end

