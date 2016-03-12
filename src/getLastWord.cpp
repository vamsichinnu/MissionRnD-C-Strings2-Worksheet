/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	char *res;
	bool t = 0;
	int count = 0, i, j = 0;
	res = (char *)malloc(sizeof(char)* 0);
	while (str[count] != '\0')
	{
		count++;
	}
	if (str)
	{
		for (i = count - 1; i >= 0; i--)
		{
			if ((int)str[i] != 32 && t == 0)
			{
				t = 1;
				count = i;
			}
			else if (t == 1 && (int)str[i] == 32)
			{
				break;
			}
		}
		if (t == 1)
		{
			for (i = i + 1; str[i] != '\0'&&i <= count; i++)
			{
				res = (char *)realloc(res, sizeof(char)*(j + 1));
				res[j] = str[i];
				j++;
			}
			res[j] = '\0';
			return res;
		}
		else
		{
			return "";
		}
	}
	else
	{
		return NULL;
	}
}
