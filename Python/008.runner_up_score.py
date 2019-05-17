if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())

    arr = list(arr)
    M = max(arr)
    m = min(arr)

    for x in range(0, n) :
        if arr[x] > m and arr[x] < M :
            m = arr[x]

    print(m)
