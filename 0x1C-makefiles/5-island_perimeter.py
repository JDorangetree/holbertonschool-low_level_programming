#!/usr/bin/python3

"""Function to find perimiter of an island """


def island_perimeter(grid):
    """
    Input: List of Lists
    Returns: Perimeter of the island
    """
    area = 0
    high = len(grid) - 1
    while high >= 0:
        for pos in range(0, len(grid[high])):
            if grid[high][pos] == 1:
                area = area + 2
            else:
                pass
        high = high - 1
    return area + 2
