#include"leetcode.h"
class Solution1_4 {
public:
	bool containsDuplicate(vector<int>& nums) {
		//�����ⷨ��ʱ��
		/*
		int n_len =nums.size();
		if(n_len==1) return false;
		for(int i=0;i<n_len;i++)
		{
		for(int j=i+1;j<n_len;j++)
		{
		if(nums[i]==nums[j]) return true;

		}
		}
		return false;
		*/
		//ȡ�ɣ�����set
		set<int> s(nums.begin(), nums.end());
		return s.size() != nums.size();
		//������棺
		//return set<int> (nums.begin(),nums.end()).size()!=nums.size();

	}
};