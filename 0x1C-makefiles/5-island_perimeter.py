#!/usr/bin/python3
"""
Module Task

"""


def island_perimeter(grid):
    """ Calculates the Perimeter of a grid Island"""
	h, v = 0, 0
	n = len(grid[0])
	m = len(grid)
	for i in range(1, m):
		for j in range(1, n):
			if grid[i][j-1] == 1 and grid[i][j] == 1:
				h += 1
			if grid[i-1][j] == 1 and grid[i][j] == 1:
				v += 1
	h += 1
	v += 1
	return 2 * (h + v)
