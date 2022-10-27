def findWords(board,words):
    def insert(word,t):
        current = t
        for i in word:
            if i not in current:
                current[i]={}
            current = current[i]
            current["#"] = 1
        current["ends"] = word
    result=[]
    def solve(board,d,i,j,s=""):
        if i<0 or j<0 or i>=len(board) or j>=len(board[0]):
            return

        l = board[i][j]
        if l in d:
            d= d[l]
            s=s+l
            if "#" in d and d["#"] and 'ends' in d:
                result.append(s)
                d["#"] =0

            board[i][j] = "*"

            if i+1<len(board) and board[i+1][j] in d:
                solve(board,d,i+1,j,s)
            if j+1<len(board[0]) and board[i][j+1] in d:
                solve(board,d,i,j+1,s)
            if i-1>=0 and board[i-1][j] in d:
                solve(board,d,i-1,j,s)
            if j-1>=0 and board[i][j-1] in d:
                solve(board,d,i,j-1,s)

            board[i][j] = l

    t={}
    for word in words:
        insert(word,t)

    for r in range(len(board)):
        for c in range(len(board[0])):
            solve(board,t,r,c)


    print(result)

if __name__ == "__main__":
   findWords([["o","a","a","n"],["e","t","e","a"],["i","h","k", "r"],["i","f","l","v"]],["oath","pea","tea","rain"])