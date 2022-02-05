int mostWordsFound(char **sentences, int sentencesSize)
{
    int max = -1;
    for (int i = 0; i < sentencesSize; i++)
    {
        int count = 1;
        for (int j = 0; j < strlen(sentences[i]); j++)
            if (sentences[i][j] == ' ')
                count++;
        max = count > max ? count : max;
    }
    return max;
}