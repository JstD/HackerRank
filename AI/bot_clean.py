#!/usr/bin/python

# Head ends here

def next_move(posr, posc, board):
    goal = []
    start =[posr, posc]
    min=200
    for i in range(0,5):
        for j in range(0,5):
            if board[i][j] =='d':
                temp = abs(posr-i)+abs(posc-j)
                if(temp<min):
                    min=temp
                    goal = [i,j]
    if goal[0]>start[0]:
        print( "DOWN")
    elif goal[0]<start[0]:
        print( "UP")
    elif goal[1]>start[1]:
        print( "RIGHT")
    elif goal[1]<start[1]:
        print( "LEFT")
    elif start == goal:
        print("CLEAN")

# Tail starts here

if __name__ == "__main__":
    pos = [int(i) for i in input().strip().split()]
    board = [[j for j in input().strip()] for i in range(5)]
    next_move(pos[0], pos[1], board)