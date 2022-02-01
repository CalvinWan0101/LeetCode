int *getConcatenation(int *nums, int numsSize, int *returnSize)
{
	int *answer = (int *)malloc(sizeof(int) * numsSize * 2);
	*returnSize = 2 * numsSize;

	for (int i = 0; i < numsSize; i++)
	{
		answer[i] = nums[i];
		answer[i + numsSize] = nums[i];
	}

	return answer;
}