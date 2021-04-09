def next_move(posx, posy, dimx, dimy, board):
    goal = []
    start =[posx, posy]
    min=2500
    sumx=0
    sumy=0
    count=0
    for i in range(0,dimx):
        for j in range(0,dimy):
            if board[i][j] =='d':
                sumx+=i
                sumy+=j
                count+=1
    if count>1:
        count-=1
    for i in range(0,dimx):
        for j in range(0,dimy):
            if board[i][j] =='d':
                temp = abs(posx-i)+abs(posy-j)-0.7*(abs((sumx-i)/count-i)+abs((sumy-j)/count-j))
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

if __name__ == "__main__":
    pos = [int(i) for i in input().strip().split()]
    dim = [int(i) for i in input().strip().split()]
    board = [[j for j in input().strip()] for i in range(dim[0])]
    next_move(pos[0], pos[1], dim[0], dim[1], board)