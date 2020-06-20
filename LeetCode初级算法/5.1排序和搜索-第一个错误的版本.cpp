
/*

���ǲ�Ʒ����Ŀǰ���ڴ���һ���Ŷӿ����µĲ�Ʒ�����ҵ��ǣ���Ĳ�Ʒ�����°汾û��ͨ��������⡣����ÿ���汾���ǻ���֮ǰ�İ汾�����ģ����Դ���İ汾֮������а汾���Ǵ�ġ�

�������� n ���汾 [1, 2, ..., n]�������ҳ�����֮�����а汾����ĵ�һ������İ汾��

�����ͨ������ bool isBadVersion(version) �ӿ����жϰ汾�� version �Ƿ��ڵ�Ԫ�����г���ʵ��һ�����������ҵ�һ������İ汾����Ӧ�þ������ٶԵ��� API �Ĵ�����

ʾ��:

���� n = 5������ version = 4 �ǵ�һ������İ汾��

���� isBadVersion(3) -> false
���� isBadVersion(5) -> true
���� isBadVersion(4) -> true

���ԣ�4 �ǵ�һ������İ汾��
*/
// The API isBadVersion is defined for you.
 bool isBadVersion(int version);

class Solution5_1 {
public:
	int firstBadVersion(int n) {
		if (isBadVersion(1)) return 1;
		long long good_num = 1;
		long long bad_num = n;
		while ((bad_num - good_num) != 1)
		{
			if (!isBadVersion(good_num))
			{
				long long x = (long long)((good_num + bad_num) / 2);
				if (!isBadVersion(x)) good_num = x;
			}

			if (isBadVersion(bad_num))
			{
				long long x = (long long)((good_num + bad_num + 1) / 2);
				if (isBadVersion(x)) bad_num = x;
			}

		}


		return bad_num;
	}
};