/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alschnei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:32:16 by alschnei          #+#    #+#             */
/*   Updated: 2025/03/24 14:32:17 by alschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

void	initialize_game(t_mlxgame *game)
{
	game->mlx = mlx_init();
	if (!game->mlx)
	{
		write(2, "Error: MLX init failed\n", 23);
		free_maparray(game->map);
		exit(1);
	}
	game->window = mlx_new_window(game->mlx, game->width * 50, 
		game->height * 50, "so_long");
	if (!game->window)
	{
		write(2, "Error: Window creation failed\n", 30);
		free_maparray(game->map);
		exit(1);
	}
}

void	load_assets(t_mlxgame *game, char *path, int height, int width)
{
	
	game->asset = mlx_xpm_file_to_image(game->mlx, path, &width, &height);
	if (!game->asset)
		exit(1);
	printf("Width: %d, Height: %d\n", width, height);
	mlx_put_image_to_window(game->mlx, game->window, game->asset, width, height);
	if (!game->asset)
	{
		write(1, "Error: Failed to load asset\n", 28);
		free_maparray(game->map);
		exit(1);
	}
}

void	load_render_map(t_mlxgame *game)
{
	int		x;
	int		y;

	y = 0;
	
	while (game->map[y])
	{
		x = 0;
		while (game->map[y][x])
		{
			if (game->map[y][x] == '1')
				load_assets(game,"assets/Wall.xpm", y * 50, x * 50);
			else if (game->map[y][x] == 'P')
				load_assets(game,"assets/Player.xpm", y * 50, x * 50);
			else if (game->map[y][x] == 'C')
				load_assets(game,"assets/Collectable.xpm", y * 50, x * 50);
			else if (game->map[y][x] == 'E')
				load_assets(game,"assets/Exit.xpm", y * 50, x * 50);
			else if (game->map[y][x] == 'E')
				load_assets(game,"assets/Floor.xpm", y * 50, x * 50);
			x++;
		}
		y++;
	}
}

void	free_maparray(char **maparray)
{
	int i;

	i = 0;
	while (maparray[i])
	{
		free(maparray[i]);
		i++;
	}
	free(maparray);
}