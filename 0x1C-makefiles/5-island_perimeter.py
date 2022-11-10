#!/usr/bin/python3
"""
Module Task

"""


def island_perimeter(grid):
  """ Calculates the perimeter of a contiguous island"""
    h, v = 0, 0
    n = len(grid[0])
    m = len(grid)
    for i in range(1, m):
        for j in range(1, n):
            if grid[i - 1][j - 1:j + 2] in [[1, 1, 0], [0, 1, 1], [1, 1, 1]]:
                h += 1
    transposed = []
    for i in range(m):
        transposed.append([row[i] for row in grid])
    for i in range(1, m):
        for j in range(1, n):
            if transposed[i - 1][j - 1:j + 2] in
            [[1, 1, 0], [0, 1, 1], [1, 1, 1]]:
                v += 1
    total = 0
    for i in range(0, m):
        for j in range(0, n):
            total += grid[i][j]
    if total == 1:
        return 4
    if h > 0 and v == 0:
        h += 1
    if v > 0 and h == 0:
        v += 1
    return 2 * (h + v)
