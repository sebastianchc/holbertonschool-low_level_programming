#!/usr/bin/python3
def island_perimeter(grid):
    """ islan_perimeter function """
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if i + 1 < len(grid):
                    if grid[i + 1][j] == 0:
                        count += 1
                else:
                    count += 1
                if i - 1 >= 0:
                    if grid[i - 1][j] == 0:
                        count += 1
                else:
                    count += 1
                if j + 1 < len(grid[0]):
                    if grid[i][j + 1] == 0:
                        count += 1
                else:
                    count += 1
                if j - 1 >= 0:
                    if grid[i][j - 1] == 0:
                        count += 1
                else:
                    count += 1
    return count
