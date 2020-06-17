#include"leetcode.h"
class Solution1_9 {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> hashmap;


		for (int index = 0; index<nums.size(); index++)
		{
			int need = target - nums[index];
			if (hashmap.count(need) != 0)
			{
				return vector<int> {index, (*hashmap.find(need)).second};
			}
			hashmap.insert(make_pair(nums[index], index));


		}

		return vector<int>(-1);
	}
};