
def dfs(p,f,matrix_size,matrix):
    stack = []
    visited =[]
    stack.append(p+[None])
    result = []
    while stack:
        temp = stack[len(stack)-1] 
        if temp ==f:
            while(temp[2]):
                result = [temp[0],temp[1]] + result
                temp = temp[2]
        stack.pop(len(stack)-1)
        flag = 1
        for x in temp:
            if temp[:-1] == x:
                flag = 0
                break
        if flag ==1:
            visited.append(temp[:-1])
            if temp[0]-1>=0:
                if matrix[temp[0]-1][temp[1]] != '%':
                    stack.append([temp[0]-1,temp[1],temp])
            if temp[1]-1>0:
                if matrix[temp[0]][temp[1]-1] != '%':
                    stack.append([temp[0],temp[1]-1,temp])
            if temp[0]+1<matrix_size[0]:
                if matrix[temp[0]+1][temp[1]] != '%':
                    stack.append([temp[0]+1,temp[1],temp])
            if temp[1]+1<matrix_size[1]:
                if matrix[temp[0]][temp[1]+1] != '%':
                    stack.append([temp[0],temp[1]+1,temp])
    for x in result:
        print(str(x[0])+' '+str(x[1]))


if __name__ == "__main__":
    p = [int(x) for x in input().strip().split(' ')]
    f = [int(x) for x in input().strip().split(' ')]
    matrix_size = [int(x) for x in input().strip().split(' ')]
    matrix = []
    for i in range(0,matrix_size[0]):
        matrix.append(input().strip())
    dfs(p,f,matrix_size,matrix)