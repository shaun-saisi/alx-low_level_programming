#!/usr/bin/python3
"""Perimeter measuring function"""

def island_perimeter(grid):
    """Return the perimeter of the island
    Args:
        grid: A list of integfers to represent the perimeter of the island
    Returns:
        The perimeter of the island
        """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for x in range (height):
        for y in range (width):
            if grid[x][y] == 1:
                size += 1
                if (y > 0 and grid[x][y -1] == 1):
                    edges += 1
                if (x > 0 and grid[x -1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
