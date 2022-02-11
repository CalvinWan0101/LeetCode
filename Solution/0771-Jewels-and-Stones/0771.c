int numJewelsInStones(char *jewels, char *stones)
{
    int count = 0;
    for (int i = 0; i < strlen(jewels); i++)
        for (int j = 0; j < strlen(stones); j++)
            count = jewels[i] == stones[j] ? count + 1 : count;
    return count;
}