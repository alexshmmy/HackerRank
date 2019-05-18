def swap_case(s) :

    newString = ""

    for x in s :
        if x.islower() :
            newString += x.upper()
        elif x.isupper() :
            newString += x.lower()   
        else :
            newString += x    
    
    return newString


if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
