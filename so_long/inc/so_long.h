/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftegan <ftegan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 22:11:58 by ftegan            #+#    #+#             */
/*   Updated: 2022/05/24 20:31:44 by ftegan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define ERROR_ARG_COUNT	"Invalid arguments. Used : ./so_long <map_name>.ber"
# define ERROR_MAP_NAME		"Invalid map name. Used : <map_name>.ber"
# define ERROR_MAP			"Invalid map content"
# define ERROR_MAP_SIZE		"Invalid map size"
# define ERROR_MALLOC		"Malloc error"

# define SPACE				'0'
# define WALL				'1'
# define COLLECTIBLE		'C'
# define EXIT				'E'
# define PLAYER				'P'
# define IMG_SIZE			64

# define IMG_BACKGROUND		"sprites/background.xpm"
# define IMG_PLAYER1		"sprites/P1.xpm"
# define IMG_PLAYER2		"sprites/P2.xpm"
# define IMG_PLAYER3		"sprites/P3.xpm"
# define IMG_WALL			"sprites/wall.xpm"
# define IMG_FLOOR			"sprites/floor.xpm"
# define IMG_COIN			"sprites/star.xpm"
# define IMG_EXIT			"sprites/door.xpm"
# define IMG_EXIT2			"sprites/door_open.xpm"

# define KEY_W				13
# define KEY_S				1
# define KEY_A				0
# define KEY_D				2
# define KEY_ESC			53
# define KEY_UP				126
# define KEY_DOWN			125
# define KEY_LEFT			123
# define KEY_RIGHT			124
# define KEY_SPACE			49

# include "../Libft/libft.h"
# include <stdlib.h>
# include <fcntl.h>
# include <../betamlx/mlx.h>

typedef struct position
{
	size_t	x;
	size_t	y;
}	t_position;

typedef struct s_so_long
{
	int			i;
	int			j;
	char		**map;
	int			lines;
	int			len_line;
	int			img_w;
	int			img_h;
	int			steps;

	int			screen_width;
	int			screen_height;
	int			inside;
	int			max_wcube;
	int			max_hcube;
	int			wshift;
	int			hshift;
	t_position	player_pos;
	t_position	exit_pos;
	int			on_exit;

	int			p;
	int			e;
	int			c;

	void		*mlx;
	void		*window;
	void		*player;
	void		*background;
	void		*coin;
	void		*wall;
	void		*exit;
	void		*floor;
	void		*killer;
}		t_so_long;

void	ft_error(char *er_msg);
void	ft_checker_ext(int ac, char **av);
void	ft_parser(char *mapname, t_so_long	*st_game);
char	*get_next_line(int fd);
char	*free_doub(char **paths);
void	ft_exit(char *er_msg, t_so_long	*s_game);
void	ft_check_map(t_so_long	*s_game);
void	ft_mlx_init(t_so_long	*st_game);
void	render_map(t_so_long	*game);
int		ft_destroy_win(t_so_long	*game);
int		ft_keystroke(int keycode, t_so_long *game);
void	move(t_so_long *game, int x, int y);
void	ft_draw_step(t_so_long *game, t_position \
step, char symb_picT, void *pic);
void	step_on_finish(t_so_long *game, t_position step, t_position location);
void	ft_exit_no_free(char *er_msg, t_so_long	*s_game);

#endif