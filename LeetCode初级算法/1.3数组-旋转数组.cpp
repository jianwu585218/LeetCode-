#include"leetcode.h"
/*给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。*/

class Solution1_3 {
public:
	void rotate(vector<int>& nums, int k) {


		//左移nums.size()-k位=右移k位
		for (int i = 0; i<nums.size() - (k%nums.size()); i++)
		{
			int front = nums.front();
			nums.erase(nums.begin());

			nums.push_back(front);

		}


	}
};