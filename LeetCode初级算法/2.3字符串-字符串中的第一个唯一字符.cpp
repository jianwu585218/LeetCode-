#include "leetcode.h"
class Solution2_3 {
public:
	int firstUniqChar(string s) {
		//ʵ��1���Ʊ������
		unsigned int table[26] = {}; //��Ҫ��ʼ�������û��={}�����ʼ����0
		for (char s1 : s)
		{
			table[s1 - 'a']++;
		}


		for (int i = 0; i<s.size(); i++)
		{
			if (table[s[i] - 'a'] == 1) return i;
		}
		return -1;
		
		//ʵ��2��������
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

