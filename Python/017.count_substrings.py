def count_substring(string, sub_string) :
    '''A function that computes how many times a sub_string occur 
    in a string'''
    
    count = 0

    # compute the length of the strings
    L1 = len(string)
    L2 = len(sub_string)

    # if the length of the string is less than the length
    # of the sub-string return 0
    if L1 < L2 :
        return count
   
    # iterate over the string 
    for i in range(0, L1-L2+1) :
        j = 0
        k = i

        # iterate over the substring and check if all 
        # the characters one by one are the same    
        while (string[k] == sub_string[j]) :
            j += 1
            k += 1

            # break the while when the sub-string has been checked
            if (j == L2) :
                break
        
        if (j == L2) :
            count += 1

    return count;

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
