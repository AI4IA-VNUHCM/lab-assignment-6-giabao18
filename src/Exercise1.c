/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n)
{
	// Your codes here
	int t = 1000;
	while (t == 1)
	{
		/* code */
		char string[50] = ("one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "eleven", "twelve", "thirdteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety");
		int value = n / t;
		if (t > 10)
		{
			switch (value)
			{
			case 1:
				printf("%c", string[0]);
				break;
			case 2:
				printf("%c", string[1]);
				break;
			case 3:
				printf("%c", string[2]);
				break;
			case 4:
				printf("%c", string[3]);
				break;
			case 5:
				printf("%c", string[4]);
				break;
			case 6:
				printf("%c", string[5]);
				break;
			case 7:
				printf("%c", string[6]);
				break;
			case 8:
				printf("%c", string[7]);
				break;
			case 9:
				printf("%c", string[8]);
				break;
			}
		}

		if (t == 1000)
		{
			printf(" thousand ");
		}

		if (t == 100 && n / t != 0)
		{
			printf(" hundred ");
		}

		if (t == 10 && n / t != 0)
		{
			if (value == 1)
			{
				int value2 = n % 1000;
				switch (value2)
				{
				case 1:
					printf("%c", string[9]);
					break;
				case 2:
					printf("%c", string[10]);
					break;
				case 3:
					printf("%c", string[11]);
					break;
				case 4:
					printf("%c", string[12]);
					break;
				case 5:
					printf("%c", string[13]);
					break;
				case 6:
					printf("%c", string[14]);
					break;
				case 7:
					printf("%c", string[15]);
					break;
				case 8:
					printf("%c", string[16]);
					break;
				case 9:
					printf("%c", string[17]);
					break;
				}
			}
			else
			{
			}
		}

		t /= 10;
	}
}

int main(int argc, char *argv[])
{
	// testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);

	Ex1(testcase);

	return 0;
}
