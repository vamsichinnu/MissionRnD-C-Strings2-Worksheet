/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>

char * get_sub_string(char *str, int i, int j){
	int k, p = 0;
	char *res;
	res = (char *)malloc(sizeof(char)* 0);
	if (str)
	{
		if (i > j)
		{
			return NULL;
		}
		if (i < 0)
		{
			i = 0;
		}
		for (k = 0; str[k] != '\0'; k++)
		{
			if (k >= i&&k <= j)
			{
				p++;
				res = (char *)realloc(res, sizeof(char)*(p));
				res[p - 1] = str[k];
			}
			else if (k > j)
			{
				break;
			}
		}
		res[p] = '\0';
		return res;
	}
	else
	{
		return NULL;
	}
}
