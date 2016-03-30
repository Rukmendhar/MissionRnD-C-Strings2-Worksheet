/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){

	if (str == NULL)
		return NULL;
	else
	{
		char *result = (char*)malloc(sizeof(char) * 30);
		int i = 0, index = 0, spaces = 0, j, l = 0;
		int res = 0, length, k = 0;

		for (i = 0; str[i] != '\0'; i++);
		length = i;

		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == ' ')
			{
				if ((str[i + 1] >= 'a' && str[i + 1] <= 'z') || (str[i + 1] >= 'A' && str[i + 1] <= 'Z'))
				{
					res = i + 1;

				}
				spaces++;
			}

		}
		

		if (spaces == 0)
			return str;
		else if (spaces == length)
			return NULL;
		else
		{
			for (j = res; str[j] != '\0'; j++)
			{
				if (str[j] != ' ')
				{
					result[k++] = str[j];
					l++;
				}
			}
			return result;
		}
	}

}
