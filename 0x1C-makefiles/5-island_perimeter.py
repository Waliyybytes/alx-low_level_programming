#!/usr/bin/python3
"""
    island_perimeter module
"""


def island_perimeter(grid):
    """estimates the perimeter of an island"""
    up, left, right, down = 0, 0, len(grid[0]), len(grid)
    c = 0
    for i in range(0, down):
        for j in range(0, right):
            if grid[i][j] == 1:
                c += 1 if i == up or not grid[i - 1][j] else 0
                c += 1 if j == left or not grid[i][j - 1] else 0
                c += 1 if j == right - 1 or not grid[i][j + 1] else 0
                c += 1 if i == down - 1 or not grid[i + 1][j] else 0
    return c
