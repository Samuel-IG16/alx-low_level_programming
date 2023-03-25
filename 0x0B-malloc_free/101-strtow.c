/**
 * get_words_count - Computes the number of words in a string
 * @str: The source string
 * @count: The number of words
 *
 * Return: void
 */
void get_words_count(char *str, int *count)
{
	int i, j;
	char prev_char = ' ';

	*count = 0;
	for (i = 0; str != NULL && *(str + i) != '\0'; i++)
	{
		if (*(str + i) != ' ' && prev_char == ' ')
		{
			*count += 1;
			j = 0;
		}
		if (*(str + i) != ' ')
			j++;
		prev_char = *(str + i);
	}
}

/**
 * get_word_length - Computes the length of a word
 * @str: The source string beginning with the word
 * @length: The length of the word
 *
 * Return: void
 */
void get_word_length(char *str, int *length)
{
	*length = 0;
	if (str == NULL || (str != NULL && (*str == '\0' || *str == ' ')))
		return;
	while (*(str + *length) != '\0' && *(str + *length) != ' ')
		*length += 1;
}

/**
 * strtow - Splits a string into words (array of strings)
 * @str: The string to split
 *
 * Return: The pointer to the string array or NULL if memory allocation
 * fails or str is an empty string ("") or str is NULL
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, words_count;
	char prev_char = ' ';

	get_words_count(str, &words_count);
	if (str == NULL || *str == '\0' || words_count == 0)
		return (NULL);
	words = malloc((sizeof(char *) * (words_count + 1)));
	if (words)
	{
		j = -1;
		k = 0;
		prev_char = ' ';
		for (i = 0; *(str + i) != '\0'; i++)
		{
			if (*(str + i) != ' ')
			{
				if (prev_char == ' ')
				{
					j++;
					get_word_length(str + i, &len);
					*(words + j) = malloc((sizeof(char) * (len + 1)));
					if (*(words + j) == NULL)
						return (NULL);
					k = 0;
				}
				*(*(words + j) + k) = *(str + i);
				k++;
				if (*(str + i + 1) == '\0' || *(str + i + 1) == ' ')
					*(*(words + j) + k) = '\0';
			}
			prev_char = *(str + i);
		}
		*(words + j + 1) = NULL;
		return (words);
	}
	return (NULL);
}
