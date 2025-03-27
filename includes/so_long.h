/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:03:17 by alschnei          #+#    #+#             */
/*   Updated: 2025/03/26 15:03:20 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include "../ft_libft/libft.h"
# include <mlx.h>

# define BUFFER_SIZE	1024

typedef struct s_mlxgame
{
	void	*mlx;
	void	*window;
	void	*asset;
	char	**map;
	int		width;
	int		height;
}	t_mlxgame;

bool	is_map_valid(char *mapstring);
char	*read_file(const char *filename);
int		checkfile_extension(char *filename);
int		is_rectangular(char *mapstring);
bool	playable_characters(char *mapstring);
bool	surrounded_by_walls(char *mapstring, int width);
void	flood_fill_recursive(char **map, int x, int y);
void	find_player(char **map, int *px, int *py);
void	free_map(char **map);
bool	flood_fill(char *mapstring);
bool	final_flood_check(char **maparray);
void	initialize_game(t_mlxgame *game);
void	load_assets(t_mlxgame *game, char *path, int height, int width);
void	load_render_map(t_mlxgame *game);
void	free_maparray(char **maparray);

#endif
