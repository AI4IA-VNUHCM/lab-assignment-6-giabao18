/*
2. Receive n strings from the input and sort them ascendingly.
Ex:
 _________________________________________
| Input: one two three                    |
| Output: one three two                   |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex2(int n, char *str[])
{
	// Your codes here
	int min_len = strlen(str[0]);
	for (int i = 0; i < n; i++)
	{
		int len = strlen(str[i]);
		if (len < min_len)
		{
			min_len = len;
		}
	}

	for (int i = 0; i < n - 1; i++)
	{
		int lc = i;
		for (int t = i + 1; t < n; t++)
		{
			for (int j = 0; j < min_len; j++)
			{
				if (str[i][j] > str[t][j])
				{
					lc = t;
					break;
				}
			}
			printf("%s ", str[lc]);
		}
	}
}

int main(int argc, char *argv[])
{
	// testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	char *testcase[argc];
	int i;
	for (i = 0; i < argc; i++)
	{
		testcase[i] = argv[i + 1];
	}

	Ex2(argc, testcase);

	return 0;
}
