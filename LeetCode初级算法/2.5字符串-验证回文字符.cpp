#include"leetcode.h"
class Solution2_5 {
public:
	bool isPalindrome(string s) {
		for (auto it = s.begin(); it != s.end();)
		{
			if (*it >= 'A' && *it <= 'Z') //��дתСд
			{
				*it = *it - ('A' - 'a');
				it++;
			}
			else if ((*it)>='0' && (*it)<='9')
			{
				it++;
			}
			else if ((*it) >='a' && (*it)<='z')
			{
				it++;
			}
			else  //ɾ�������֡���ĸ���ַ�
			{
				s.erase(it);
			}

		}

		//�����ַ�
		/*for(int i=0;i<s.size();)
		{
		if(s[i]>='A' && s[i]<='Z') //��дתСд
		{
		s[i] = s[i] -('A'-'a');
		i++;
		}
		else if(s[i]>'0' && s[i]<'9')
		{
		i++;
		}
		else if(s[i]>'a' && s[i]<'z')
		{
		i++;
		}
		else  //ɾ�������֡���ĸ���ַ�
		{
		s.erase(s.begin()+i);
		}

		}*/
		cout << s << endl;
		for (int i = 0; i<int(s.size() / 2); i++)
		{
			if (s[i] != s[s.size() - 1 - i])
			{
				return false;
			}

		}
		return true;

	}
};

