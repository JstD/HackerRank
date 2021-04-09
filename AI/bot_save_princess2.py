def nextMove(n,r,c,grid):
    goal = []
    start =[r,c]
    for i in range(0,n):
        for j in range(0,len(grid[i])):
            if grid[i][j]=='p':
                goal = [i,j]
    
    if goal[0]>start[0]:
        return "DOWN"
    elif goal[0]<start[0]:
        return "UP"
    if goal[1]>start[1]:
        return "RIGHT"
    elif goal[1]<start[1]:
        return "LEFT"

n = int(input())
r,c = [int(i) for i in input().strip().split()]
grid = []
for i in range(0, n):
    grid.append(input())

print(nextMove(n,r,c,grid))