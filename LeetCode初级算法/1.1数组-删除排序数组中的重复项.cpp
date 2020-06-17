//#include<iostream>
//#include<vector>
//using namespace std;
///*
//LeetCode26
//给定一个排序数组，你需要在 原地 删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。
//
//不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//*/
//
////实现1：调用erase函数，注意迭代器it++的条件
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) {
//
//		int nums_lenth = nums.size();
//		if (nums_lenth<2)
//		{
//			return nums_lenth;
//		}
//		for (vector<int>::iterator it = nums.begin(); (it + 1) != nums.end();)
//		{
//			if ((*it) == (*(it + 1)))
//			{
//				nums.erase(it + 1);
//				nums_lenth--;
//			}
//			else {
//				it++;
//			}
//
//		}
//		return nums_lenth;
//
//	}
//};
//
////实现2:赋值
////class Solution {
////public:
////	int removeDuplicates(vector<int>& nums) {
////		if (nums.size() < 2) return nums.size();
////		int j = 0;
////		for (int i = 1; i < nums.size(); i++)
////			if (nums[j] != nums[i]) nums[++j] = nums[i];
////		return ++j;
////	}
////};
//
//int main1_1()
//{
//	Solution s;
//	vector<int> nums = { 1,2,3,3 };
//
//
//	//cout << s.removeDuplicates(nums) << endl;
//	cout << nums.back() << endl;
//
//	for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
//	{
//		cout << *it << " ";
//	}
//
//	system("pause");
//	return 0;
//}