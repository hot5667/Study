int get_sum(int arr[], int n)
{
	int sum = 0;
	int i = 0;

	for (i = 0; i < n; ++i)
	{
		sum += arr[i];
	}

	return sum;
}
//시간 복잡도 n

int get_sum(int** arr, int n)
{
	int sum = 0;
	int i = 0, j = 0;

	for (i = 1; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			sum += arr[i][j];
		}
	}

	return sum;
}
//n^2


int get_sum(int n)
{
	int sum = 0;
	int i;

	for (i = 1; i <= n; i *= 2)
	{
		sum += i;
	}

	return sum;
}
// 시간 복잡도 log^2n


int get_sum(int n)
{
	int sum = 0;
	int i, j;

	for (i = 1; i < n; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			sum += j;
		}
	}

	return sum;
}
// n (n + 1) / 2 시간 복잡도 

// 해당 정보는 깃 테스트 입니다.