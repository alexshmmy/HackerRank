if __name__ == '__main__' :
    N = int(input())

    L = []
    for i in range(0, N) :
        Str = input()
        tempStr = Str.strip().split(" ")
        cond = tempStr[0]

        if (cond == "print") :
            print(L)
        elif (cond == "sort") :
            L.sort()
        elif (cond == "pop") :
            L.pop()
        elif (cond == "reverse") :
            L.reverse()
        elif (cond == "remove") :
            tempNumb = int(tempStr[1])
            L.remove(tempNumb)
        elif (cond == "append") :
            tempNumb = int(tempStr[1])
            L.append(tempNumb)
        elif (cond == "insert") :
            pos = int(tempStr[1])
            val = int(tempStr[2])
            L.insert(pos, val)
