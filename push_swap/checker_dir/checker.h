/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:51:43 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/20 21:55:10 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				value;
	struct s_list	*next;
}				t_list;

typedef struct s_astack
{
	t_list	*fst_lst;
	int		len;
	int		max_nb;
	int		min_nb;
}				t_astack;

typedef struct s_mkst
{
	int			j;
	char		**split_ag;
	t_list		*new_lst;
	t_astack	*lst;
	int			iter;
}				t_mkst;

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
void	ft_exit(void);
void	ft_make_stack(char **argv, t_astack	**astack, int i);
void	ft_check_dubl(t_astack	*astack);
int		get_next_line(char **line);
char	**ft_split(char const *s, char c);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	full_clean(t_astack	**astack, t_astack	**bstack);
void	ft_is_dig(char *s, t_list **fst_lst);
t_list	*ft_lstnew(int value);
int		ft_atoi(const char *str, t_list **fst_lst);
void	ft_lstclear(t_list **lst);
char	*split_free(char **paths);
void	full_clean(t_astack	**astack, t_astack	**bstack);

void	ft_pa(t_list **lst_a, t_list **lst_b, int *a_len, int *b_len);
void	ft_pb(t_list **lst_a, t_list **lst_b, int *a_len, int *b_len);
void	ft_ra(t_list **lst_a);
void	ft_rb(t_list **lst_b);
void	ft_rr(t_list **lst_a, t_list **lst_b);
void	ft_rra(t_list **lst_a);
void	ft_rrb(t_list **lst_b);
void	ft_rrr(t_list **lst_a, t_list **lst_b);
void	ft_sa(t_list **lst);
void	ft_sb(t_list **lst);
void	ft_ss(t_list **lst_a, t_list **lst_b);

#endif