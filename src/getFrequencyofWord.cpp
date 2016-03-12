/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int index(char *str, char word, int k)
{
	int i;
	for (i = k; str[i] != '\0'; i++)
	{
		if (str[i] == word)
		{
			return i;
		}
	}
	return -1;
}
int count_word_in_str_way_1(char *str, char *word){
	int i, j = 0, k, count = 0;
	for (k = 0; str[k] != '\0'; k++)
	{
		k = index(str, word[0], k);
		if (k != -1)
		{
			for (i = k; str[i] != '\0'; i++)
			{
				if (str[i] == word[j])
				{
					if (word[j + 1] != '\0')
					{
						j++;
					}
					else
					{
						count++;
						j = 0;
						break;
					}
				}
				else
				{
					j = 0;
					break;
				}
			}
		}
		else
		{
			return count;
		}
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

