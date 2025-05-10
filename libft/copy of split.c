#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;

	if (*s != c)
		count = 1;
	else
		count = 0;
	s++;
	while (*s)
	{
		if (*s != c && *(s - 1) == c)
			count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	*trimmed;
	char	**arr;
	size_t	i;
	size_t	count;

	if (!(*s) || !c)
		return (s);
	count = count_words(s, c);
	arr = ft_calloc((size_t)count, sizeof(char *));
	if (!arr)
		return (NULL);
	trimmed = ft_strtrim(s, (const char *)&c);
	i = 1;
	count = 0;
	arr[count] = trimmed[0];
	while (trimmed[i])
	{
		if (trimmed[i] == c)
			{
				if (trimmed[i - 1] != c)
				{
					trimmed[i] = '\0';
					count++;
				}
			}
		else
		{
			if (trimmed[i - 1] == c || trimmed[i - 1] == '\0')
				arr[count] = &trimmed[i];
		}
		i++;
	}
	trimmed[i] == '\0';
	return (arr);
}