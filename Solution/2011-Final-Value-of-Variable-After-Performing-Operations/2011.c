int finalValueAfterOperations(char **operations, int operationsSize)
{
	int sum = 0;
	for (int i = 0; i < operationsSize; i++)
		for (int j = 0; j < strlen(operations[i]); j++)
			if (operations[i][j] == '+')
			{
				sum++;
				break;
			}
			else if (operations[i][j] == '-')
			{
				sum--;
				break;
			}

	return sum;
}