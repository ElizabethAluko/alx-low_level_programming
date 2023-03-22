#!/usr/bin/python3
"""Defines a perimeter function"""


def island_perimeter(grid):
    """Defines the perimeter of the grid an island"""
    width = len(grid[0])
    height = len(grid)
    edge = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
    perimeter = size * 4 - edge * 2
    return perimeter
