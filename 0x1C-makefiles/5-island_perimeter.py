#!/usr/bin/python3
"""
This module defines a function that finds the perimeter of an island
"""


def island_perimeter(grid):
    """
    find perimeter based on a grid
    arg:
        (list) grid
    return: (int) perimeter
    """
    row = len(grid)
    col = len(grid[0])
    per = 0

    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    per += 1
                if i == row - 1 or grid[i + 1][j] == 0:
                    per += 1
                if j == 0 or grid[i][j - 1] == 0:
                    per += 1
                if j == col - 1 or grid[i][j + 1] == 0:
                    per += 1
    return per
