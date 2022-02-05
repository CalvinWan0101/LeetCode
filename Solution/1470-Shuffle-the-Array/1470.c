int *shuffle(int *nums, int numsSize, int n, int *returnSize)
{
    int *answer = (int *)malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        answer[flag++] = nums[i];
        answer[flag++] = nums[i + n];
    }
    return answer;
}