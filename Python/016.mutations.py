def mutate_string(string, position, character) :
    L = len(string)

    if (position <= L-1) :
        l = list(string)
        l[position] = character
        Str = "".join(l)
        return Str
    
    return "Position larger than the length of the string"


if __name__ == '__main__':
    s = input()
    i, c = input().split()
    s_new = mutate_string(s, int(i), c)
    print(s_new)
