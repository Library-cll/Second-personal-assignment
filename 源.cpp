#include<iostream>
#include<vector>

int MaxArray(std::vector<int> arr)
{
	int sum = arr[0];
	int now = arr[0];

	for (int i = 1; i < arr.size(); i++)
	{
		if (now < 0)
			now = arr[i];
		else
			now = now + arr[i];
		if (now > sum)
			sum = now;
	}
	return sum < 0 ? 0 : sum;
}

int main()
{
	std::vector<int> Array{-2,5,-7,8,-9,3};
	for each (int  var in Array)
	{
		std::cout << var << " ";
	}

	std::cout << std::endl;
	std::cout << "最大子序和为：" << MaxArray(Array) << std::endl;
	return 0;
}