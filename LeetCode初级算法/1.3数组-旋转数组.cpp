///*����һ�����飬�������е�Ԫ�������ƶ� k ��λ�ã����� k �ǷǸ�����*/
//
//class Solution {
//public:
//	void rotate(vector<int>& nums, int k) {
//
//
//		//����nums.size()-kλ=����kλ
//		for (int i = 0; i<nums.size() - (k%nums.size()); i++)
//		{
//			int front = nums.front();
//			nums.erase(nums.begin());
//
//			nums.push_back(front);
//
//		}
//
//
//	}
//};