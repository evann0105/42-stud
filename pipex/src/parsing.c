/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgret <emegret@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:16:55 by emgret            #+#    #+#             */
/*   Updated: 2025/04/01 10:18:17 by emgret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

int	correct_arg(int argc)
{
	if (argc == 5)
		return (1);
	else
		exit_mess("veuillez entrer ./pipex input.txt cmd1 cmd2 output.txt");
	return (0);
}

static void	skip_quoted_word(const char *s, t_pars *f)
{
	while (s[f->i] && (f->in_quote || s[f->i] != ' '))
	{
		if ((s[f->i] == '\'' || s[f->i] == '\"') && f->in_quote == 0)
		{
			f->in_quote = 1;
			f->quote_type = s[f->i];
		}
		else if (s[f->i] == f->quote_type && f->in_quote)
			f->in_quote = 0;
		f->i++;
	}
}

static int	count_words(const char *s)
{
	t_pars	func;

	func.i = 0;
	func.words = 0;
	func.in_quote = 0;
	func.quote_type = 0;
	while (s[func.i])
	{
		while (s[func.i] == ' ')
			func.i++;
		if (s[func.i])
		{
			func.words++;
			skip_quoted_word(s, &func);
		}
	}
	return (func.words);
}

char	**smart_split(const char *s)
{
	char	**result;
	t_pars	f;

	f.i = 0;
	f.j = 0;
	f.in_quote = 0;
	f.quote_type = 0;
	result = malloc((count_words(s) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (s[f.i])
	{
		while (s[f.i] == ' ')
			f.i++;
		if (s[f.i])
		{
			f.start = f.i;
			skip_quoted_word(s, &f);
			result[f.j] = ft_substr(s, f.start, f.i - f.start);
			if (!result[f.j])
				return (free_tab(result), NULL);
			f.j++;
		}
	}
	return (result[f.j] = NULL, result);
}


