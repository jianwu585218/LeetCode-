#include"leetcode.h"

class Solution1_5 {
public:
	int singleNumber(vector<int>& nums) {


		//ʵ��1������multiset��count�������Լ���ȥ�ص�����--80ms
		/*multiset<int> ms(nums.begin(), nums.end());
		for (multiset<int>::iterator it = ms.begin(); (it ) != ms.end(); it++)
		{
		if (ms.count(*it) == 1)
		{
		return *it;
		}
		}
		return 0;
		*/
		//ʵ��2���������^�����ԡ�a^b^a=a^a^b=b,��ͬΪ0����ͬΪ1
		/*int ret = nums[0];
		for (int i=1;i<nums.size();i++)
		{
		ret ^=nums[i];
		}

		return ret;*/

		//ʵ��3������unorder_map�Ĺ�ϣ������
		unordered_map<int, int> hash;
		for (int i = 0; i<nums.size(); i++)
		{
			hash[nums[i]]++;
		}
		for (unordered_map<int, int>::iterator it = hash.begin(); it != hash.end(); it++)
		{
			if ((*it).second == 1) return (*it).first;


		}
		return 0;
	}
};