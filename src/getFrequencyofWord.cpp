/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	
	int i = 0, j = 0, k = 0,count=0;

	for (k = 0; word[k] != '\0'; k++);

	for (i = 0; str[i] != '\0';)
	{
		if (str[i] == ' ')
		{
			i++;
			j = 0;
		}
		else
		{
			if (str[i] == word[j])
			{
				i++;
				j++;	
			}
			else if (j == k)
			{
				j = 0;
				count++;
				i++;
			}
			else
			{
				i++;
				j = 0;
			}
		}
	}
	if (j == k)
		count++;

	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

