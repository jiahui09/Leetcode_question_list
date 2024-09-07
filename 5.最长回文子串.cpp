/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    pair<int,int> getIt(string& s,int left,int right) {
        while(right<=s.size()&&left>=0s&&[left]==s[right])
        {
            left--;
            right++;
        }
        return {left+1,right-1};
    }
    string longestPalindrome(string s) {
        int n = s.size();
        int l = 0,r = 0;
        int maxL = 1;
        int begin;
        for(int i=0;i<n;++i)
        {
            auto [begin1,end1] = getIt(s,i,i);
            auto [begin2,end2] = getIt(s,i,i+1);
            if(end1-begin1>end2-begin2)
            {
                if(maxL<end1-begin1+1){
                    maxL = end1-begin1+1;
                    begin = begin1;
                }
                 
            }else{
                if(maxL<end2-begin2+1){
                    maxL = end2-begin2+1;
                    begin = begin2;
                } 
            }
        }
    return s.substr(begin,maxL);
    }
};
// @lc code=end

