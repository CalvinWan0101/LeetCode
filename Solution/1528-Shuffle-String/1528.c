char *restoreString(char *s, int *indices, int indicesSize)
{
    for (int i = 0; i < indicesSize - 1; i++)
        for (int j = i + 1; j < indicesSize; j++)
            if (indices[i] > indices[j])
            {
                int numTemp = indices[i];
                indices[i] = indices[j];
                indices[j] = numTemp;

                char wordTemp = s[i];
                s[i] = s[j];
                s[j] = wordTemp;
            }
    return s;
}