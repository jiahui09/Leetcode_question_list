/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] Z 字形变换
 */

// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {

        int n = s.size();
        int D = 2*(numRows-1);
        string res="";
        if(numRows == 1) return s;
        
        for(int i=1 ; i<=numRows;i++)
        {
            int d = i==numRows ? 2*(numRows-1) : 2*(numRows-i-1);
            int j = i-1;
            while(j<n)
            {
                res.push_back(s[j]);
                if(j+d<n) res.push_back(s[j+d]);
                j += D;
            }
            
        }

        return res;
    }
};
// @lc code=end

