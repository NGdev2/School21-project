/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:35:26 by ftegan            #+#    #+#             */
/*   Updated: 2022/02/17 18:54:15 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_astack
{
	t_list	*fst_lst;
	int		len;
	int		max_nb;
	int		min_nb;
}				t_astack;

typedef struct s_oper_ret
{
	int	ra;
	int	rra;
	int	rb;
	int	rrb;
	int	case1;
	int	case2;
	int	case3;
	int	case4;
}				t_oper_ret;

typedef struct s_min
{
	t_list	*lst;
	int		min_nb;
	int		min_nb2;
}				t_min;

typedef struct s_mkst
{
	int			j;
	char		**split_ag;
	t_list		*new_lst;
	t_astack	*lst;
	int			iter;
}				t_mkst;

typedef struct s_var
{
	t_oper_ret	min_op;
	t_oper_ret	cur_op;
	int			pos_b;
	int			min;
	int			cur_min;
	t_list		*bst;
}				t_var;

char		*split_free(char **paths);
void		ft_is_dig(char *s, t_list **fst_lst);
void		full_clean(t_astack	**astack, t_astack	**bstack);
void		ft_exit(void);
void		ft_make_stack(char **argv, t_astack	**astack, int i);
void		ft_check_dubl(t_astack	*astack);
void		ft_push_to_b(t_astack	**astack, t_astack	**bstack);
void		ft_sort_three(t_astack	***astack);
void		ft_sort_two(t_astack	**astack);
void		ft_sort_two_rev(t_astack	**stack);
void		ft_push_to_a(t_astack	**astack, t_astack	**bstack);
int			ft_last(t_list *lst);
void		ft_finalsort(t_astack **astack);
int			ft_pos_in_a(t_list *lst, int value);
int			ft_comfort_nb(t_astack *astack, t_astack *bstack, \
			t_oper_ret *oper_case);
t_oper_ret	ft_oper_to_push(t_astack *ast, int pos_b, int b_len, int b_val);
void		ft_sort_five(t_astack	**astack, t_astack	**bstack);
void		ft_case1(t_oper_ret	oper, t_astack	***astack, t_astack	***bstack);
void		ft_case2(t_oper_ret	oper, t_astack	***astack, t_astack	***bstack);
void		ft_case3(t_oper_ret	oper, t_astack	***astack, t_astack	***bstack);
void		ft_case4(t_oper_ret	oper, t_astack	***astack, t_astack	***bstack);
void		ft_sa(t_list **lst, int to_write);
void		ft_sb(t_list **lst, int to_write);
void		ft_ss(t_list **lst_a, t_list **lst_b);
void		ft_pb(t_list **lst_a, t_list **lst_b, int *a_len, int *b_len);
void		ft_pa(t_list **lst_a, t_list **lst_b, int *a_len, int *b_len);
void		ft_ra(t_list **lst_a, int to_write);
void		ft_rb(t_list **lst_b, int to_write);
void		ft_rr(t_list **lst_a, t_list **lst_b);
void		ft_rra(t_list **lst_a, int to_write);
void		ft_rrb(t_list **lst_b, int to_write);
void		ft_rrr(t_list **lst_a, t_list **lst_b);

#endif