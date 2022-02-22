int *createTargetArray(int *nums, int numsSize, int *index, int indexSize, int *returnSize)
{
    int *ans = (int *)malloc(sizeof(int) * indexSize);
    *returnSize = indexSize;
    int ansSize = 0;
    for (int i = 0; i < indexSize; i++)
        if (i)
        {
            for (int temp = ansSize; temp > index[i]; temp--)
                ans[temp] = ans[temp - 1];
            ans[index[i]] = nums[i];
            ansSize++;
        }
        else
        {
            ans[0] = nums[0];
            ansSize++;
        }
    return ans;
}