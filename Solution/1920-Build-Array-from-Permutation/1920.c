int *buildArray(int *nums, int numsSize, int *returnSize)
{
	*returnSize = numsSize;

	int *answer = (int *)malloc(sizeof(int) * numsSize);

	for (int i = 0; i < numsSize; i++)
		answer[i] = nums[nums[i]];

	return answer;
}