#!/usr/bin/python3
"""
Module Island Perimeter
"""


def island_perimeter(grid):
    '''Calculates the perimeter of grid where '1' is found'''
    peri = 0
    for r in range (len(grid)):
        for c in range(len(grid[0])):
            if grid[r][c] == 1:
                if r == 0 or grid[r - 1][c] == 0:
                    peri += 1
                if r == (len(grid) - 1) or grid[r + 1][c] == 0:
                    peri += 1
                if c == 0 or grid[r][c -1] == 0:
                    peri += 1
                if c == (len(grid[0]) - 1) or grid[r][c + 1] == 0:
                    p += 1
    return peri
