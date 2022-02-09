int *smallerNumbersThanCurrent(int *nums, int numsSize, int *returnSize)
{
    int *answer = (int *)malloc(numsSize * sizeof(int));
    memset(answer, 0, numsSize * sizeof(int));
    *returnSize = numsSize;
    for (int i = 0; i < numsSize; i++)
        for (int j = 0; j < numsSize; j++)
            answer[i] = nums[i] > nums[j] ? answer[i] + 1 : answer[i];
    return answer;
}