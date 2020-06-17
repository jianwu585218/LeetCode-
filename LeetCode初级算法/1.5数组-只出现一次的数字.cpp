#include"leetcode.h"

class Solution1_5 {
public:
	int singleNumber(vector<int>& nums) {


		//实现1：利用multiset的count函数，以及不去重的特性--80ms
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
		//实现2：利用异或^的特性》a^b^a=a^a^b=b,相同为0，不同为1
		/*int ret = nums[0];
		for (int i=1;i<nums.size();i++)
		{
		ret ^=nums[i];
		}

		return ret;*/

		//实现3：利用unorder_map的哈希表特性
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