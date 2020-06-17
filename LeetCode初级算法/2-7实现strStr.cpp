#include"leetcode.h"


int main()
{

	//Solution s;
	vector<int> v;
	vector<int> v_next;
	v.push_back(1);
	v.push_back(2);
	string res;
	
	for (int i = 0; i<v.size(); i++)
	{
		res = res.append( to_string(v[i]));
	}
	cout << res << endl;
	system("pause");
	return 0;
}