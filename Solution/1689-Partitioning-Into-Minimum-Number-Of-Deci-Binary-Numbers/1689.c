int minPartitions(char *n)
{
    int max = -1;
    for (int i = 0; i < strlen(n); i++)
        if (n[i] > max)
            max = n[i];
    return max - 48;
}