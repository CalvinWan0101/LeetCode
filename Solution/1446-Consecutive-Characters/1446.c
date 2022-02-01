int maxPower(char *s)
{
    int max = -1;
    int count = 1;
    if (strlen(s) == 1)
        return max = 1;
    for (int i = 1; i < strlen(s); i++)
    {
        if (s[i] == s[i - 1])
            count++;
        else
            count = 1;
        if (count > max)
            max = count;
    }
    return max;
}