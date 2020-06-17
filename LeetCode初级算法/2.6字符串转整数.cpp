#include"leetcode.h"
class Solution {
public:
	int myAtoi(string str) {
		if (!(str[0] == ' ' || str[0] == '-' || str[0] == '+' || (str[0] <= '9'&&str[0] >= '0')))
		{
			return 0;

		}

		vector<char> v;
		long long res = 0;
		for (char s : str)
		{
			if (s == '-' || (s <= '9'&&s >= '0'))
			{
				v.push_back(s);
				cout << s << " ";
			}
			else if (s == '.')
			{
				break;
			}

		}
		cout << endl;
		if (v.size() == 0)
		{
			return 0;
		}

		//else if (v.front() == '+' || v.front() == '-')
		else if ( v.front() == '-')
		{
			if (v.size() == 1)
			{
				return 0;
			}

			res = -1*getres(v, 1);
		}
		else {
			res = getres(v, 0);
		}
		cout << res << endl;

		if (res>pow(2, 31) - 1) return pow(2, 31) - 1;
		else if (res<-1 * pow(2, 31)) return -1 * pow(2, 31);
		return (int)res;


	}

	long long getres(vector<char> v, int x)
	{
		long long res = 0;
		for (int i = x; i<v.size(); i++)
		{
			res = res + pow(10, v.size() - i - 1)*(v[i] - '0');
		}

		return res;

	}
};
