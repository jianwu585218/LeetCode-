#include "leetcode.h"
class Solution2_3 {
public:
	int firstUniqChar(string s) {
		//实现1：制表计数法
		unsigned int table[26] = {}; //需要初始化，如果没有={}，则初始化非0
		for (char s1 : s)
		{
			table[s1 - 'a']++;
		}


		for (int i = 0; i<s.size(); i++)
		{
			if (table[s[i] - 'a'] == 1) return i;
		}
		return -1;
		
		//实现2：暴力法
		/*
		if(s.size()==0)
		{
		return -1;
		}
		else if(s.size()==1)
		{
		return 0;
		}

		for(int i=0;i<s.size();i++)
		{
		bool is_single = false;
		for(int j=0;j<s.size();j++)
		{

		if(s[i]==s[j]&&i!=j)
		{
		is_single = true;
		break;
		}
		}
		if (!is_single)
		{
		return i;
		}
		}
		return -1;*/
	}
};

