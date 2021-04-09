#!/usr/bin/python

def displayPathtoPrincess(n,grid):
#print all the moves here
    start = []
    goal = []
    for i in range(0,n):
        for j in range(0,len(grid[i])):
            if grid[i][j]=='m':
                start = [i,j]
            elif grid[i][j]=='p':
                goal = [i,j]
    while(start!=goal):
        if goal[0]>start[0]:
            print("DOWN")
            start[0]+=1
        elif goal[0]<start[0]:
            print("UP")
            start[0]-=1
        if goal[1]>start[1]:
            print("RIGHT")
            start[1]+=1
        elif goal[1]<start[1]:
            print("LEFT")
            start[1]-=1


m = int(input())
grid = [] 
for i in range(0, m): 
    grid.append(input().strip())

displayPathtoPrincess(m,grid)