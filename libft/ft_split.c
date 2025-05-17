#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;
	if (!(*s))
		return (0);
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

char	*save_word(const char *start, char c)
{
	size_t	len;
	char	*end;

	end = ft_strchr(start, c);
	if (end)
	{
		len = end - start;
		return (ft_substr(start, 0, len));
	}
	else
		return (ft_strdup(start));
}

void	clean_mem(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	words;
	size_t	count;

	//if (!(*s) || !c)
	//	return (NULL);
	words = count_words(s, c);
	arr = ft_calloc((size_t)words + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	count = 0;
	while (count < words)
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
		{
			arr[count] = save_word(&s[i], c);
			if (!arr[count])
			{
				clean_mem(arr);
				return (NULL);
			}
			count++;
		}
		i++;
	}
	return (arr);
}