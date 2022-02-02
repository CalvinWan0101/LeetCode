char *defangIPaddr(char *address)
{
    char *ans = (char *)malloc(strlen(address) + 7);
    memset(ans, 0, strlen(address) + 7);
    int flag = 0;
    for (int i = 0; i < strlen(address); i++)
        if (address[i] == '.')
        {
            ans[flag] = '[';
            ans[flag + 1] = '.';
            ans[flag + 2] = ']';
            flag += 3;
        }
        else
        {
            ans[flag] = address[i];
            flag++;
        }
    return ans;
}