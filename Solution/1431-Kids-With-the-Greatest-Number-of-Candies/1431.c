bool *kidsWithCandies(int *candies, int candiesSize, int extraCandies, int *returnSize)
{
    bool *answer = (bool *)malloc(candiesSize * sizeof(bool));
    *returnSize = candiesSize;
    int max = -1;
    for (int i = 0; i < candiesSize; i++)
        max = max > candies[i] ? max : candies[i];
    for (int i = 0; i < candiesSize; i++)
        answer[i] = candies[i] + extraCandies >= max;
    return answer;
}