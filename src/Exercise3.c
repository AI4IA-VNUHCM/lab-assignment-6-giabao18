/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex3(char *str)
{
	char longest_str[20];
	char shortest_str[10];
	int max_index = 0, wlen = 0, short_index = 3;
	int index, index1;
	int len = strlen(str);
	for (int i = 0; i <= len; i++)
	{
		if (str[i] != ' ' && str[i] != '\0')
		{
			wlen++;
			continue;
		}

		if (wlen > max_index)
		{
			max_index = wlen;
			index = i - wlen;
		}

		if (wlen < short_index)
		{
			short_index = wlen;
			index1 = i - wlen;
		}
		wlen = 0;
	}

	for (int i = 0; i < max_index; i++)
	{
		longest_str[i] = str[i + index];
	}

	for (int i = 0; i < short_index; i++)
	{
		shortest_str[i] = str[i + index1];
	}

	longest_str[max_index] = '\0';
	shortest_str[short_index] = '\0';
	printf("Shortest word: %s", shortest_str);
	printf("\nLongest word: %s", longest_str);
}

int main(int argc, char *argv[])
{
	// testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex3(testcase);

	return 0;
}
