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

char	*save_word(char *start, char c)
{
	size_t	len;
	char	*end;

	end = ft_strchr(start, c);
	if (end)
	{
		len = end - start;
		return (ft_substr(start, 0, len + 1));
	}
	else
	{
		return (ft_strdup(start));
	}
}

char	**ft_split(char const *s, char c)
{
	//char	*trimmed;
	char	**arr;
	size_t	i;
	size_t	words;
	size_t	count;

	if (!(*s) || !c)
		return (s);
	words = count_words(s, c);
	arr = ft_calloc((size_t)words + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	//trimmed = ft_strtrim(s, (const char *)&c);
	i = 0;
	count = 0;
	//arr[count] = trimmed[0];
	while (count <= words)
	{
			if (s[i] != c && (s[i - 1] == c || i == 0))
			{
				arr[count] = save_word(s[i], c);
				count++;
			}
		i++;
	}
	return (arr);
}
		// if (trimmed[i] == c)
		// 	{
		// 		if (trimmed[i - 1] != c)
		// 		{
		// 			trimmed[i] = '\0';
		// 			count++;
		// 		}
		// 	}
		// else
		// {
		// 	if (trimmed[i - 1] == c || trimmed[i - 1] == '\0')
		// 		arr[count] = &trimmed[i];
		// }
		// i++;