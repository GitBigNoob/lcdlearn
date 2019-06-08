/*
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 */
class Solution {
public:
    string intToRoman(int num) {
        string res = "";
	    short tNum[] = { 1,5,10,50,100,500,1000 };
	    short trans[] = { 0,0,0,2,2,4,4 };
	    char tChar[] = { 'I','V','X','L','C','D','M' };
	    int i = 6;
	    while (num) {
	    	for (; i >= 0; i--) {
	    		if (num / tNum[i] != 0) {
	    			if (i + 1 < 7 && tNum[i + 1] - num <= tNum[trans[i + 1]]) {
	    				res += tChar[trans[i + 1]];
	    				res += tChar[i + 1];
	    				num -= tNum[i + 1] - tNum[trans[i + 1]];
	    			}
	    			else {
	    				res += tChar[i];
	    				num -= tNum[i];
	    			}
	    			break;
	    		}
	    	}
	    }
	    return res;
    }
};

