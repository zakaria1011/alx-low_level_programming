#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    - grid (list of list of integers): Represents the island grid.
      0 represents a water zone, and 1 represents a land zone.

    Returns:
    - int: Perimeter of the island.

    Constraints:
    - Grid is rectangular, width and height don’t exceed 100.
    - Grid is completely surrounded by water, and there is one island (or nothing).
    - The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
    """

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4

                # Check left neighbor
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

                # Check top neighbor
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2

    return perimeter
