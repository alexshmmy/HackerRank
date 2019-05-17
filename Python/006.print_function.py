if __name__ == '__main__':
    n = int(input())

    L = []
    for i in range(1, n+1) :
        L.append(i)

    t = ''.join(str(x) for x in L)
    print(t)
