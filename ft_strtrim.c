/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:11:34 by dabae             #+#    #+#             */
/*   Updated: 2023/10/05 09:52:29 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	start;
	size_t	end;
	size_t	len;

	if (s1 && set)
	{
		start = 0;
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		end = ft_strlen(s1);
		while (start < end && ft_strrchr(set, s1[end - 1]))
			end--;
		len = end - start;
		s2 = (char *)malloc(sizeof(char) * (len + 1));
		if (!s2)
			return (NULL);
		ft_strlcpy(s2, &s1[start], len + 1);
	}
	return (s2);
}
