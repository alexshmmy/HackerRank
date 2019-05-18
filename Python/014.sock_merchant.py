n = int(input())
ar = list(map(int, input().rstrip().split()))

# initialize a dictionary
socks = {}

counter = 0
for x in ar :
    if x not in socks.keys() :
        socks[x] = True
    else :
        socks[x] = not socks[x]

        if socks[x] == False :
            counter += 1

print(counter)
