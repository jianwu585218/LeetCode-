//#include<iostream>
//#include<vector>
//using namespace std;
///*
//LeetCode26
//����һ���������飬����Ҫ�� ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Σ������Ƴ���������³��ȡ�
//
//��Ҫʹ�ö��������ռ䣬������� ԭ�� �޸��������� ����ʹ�� O(1) ����ռ����������ɡ�
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
//*/
//
////ʵ��1������erase������ע�������it++������
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
////ʵ��2:��ֵ
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