/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarkan <kbarkan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:05:45 by kbarkan           #+#    #+#             */
/*   Updated: 2024/10/27 17:10:04 by kbarkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *_SUBSTR;
	int _INDEX;
	int _svsv;

	_SUBSTR = malloc(len * sizeof(char) + 1);
	if (_SUBSTR == NULL)
	{
		return NULL;
	}
	_svsv = start;
	_INDEX = 0;
	while (s[_svsv] != '\0' && _svsv < start + len)
	{
		_SUBSTR[_INDEX] = s[_svsv];
		_INDEX++;
		_svsv++;
	}
	return _SUBSTR;
}

int	main(void)
{
	char x[] = "KHALID";
	char *g = ft_substr(x, 1, 2);
	puts(g);

	free(g);
	
	return 0;
}
