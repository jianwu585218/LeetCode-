#include"leetcode.h"
class Solution1_7 {
public:
	vector<int> plusOne(vector<int>& digits) {
		digits.back() += 1;
		if (digits.back() != 10)
		{
			return digits;
		}

		int i = digits.size() - 1;


		while ((digits[i] == 10) && i >= 0)
		{
			digits[i] = 0;
			if (i != 0)
			{
				digits[i - 1]++;
				i--;
			}
			else {
				vector<int> res;
				res.push_back(1);
				res.resize(digits.size() + 1);
				for (int x = 0; x<digits.size(); x++)
				{
					res[x + 1] = digits[x];
				}
				return res;
			}
		}
		return digits;



	}
};