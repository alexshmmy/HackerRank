def second_smallest(numbers) :
    ''' A function that computes the second lowest element of a
        list of integers'''

    m1, m2 = float('inf'), float('inf')
    for x in numbers :
        if x <= m1 :
            m1, m2 = x, m1
        elif x < m2 :
            m2 = x
    return m2

# input a list
x = [0, 1, 5, 7, 100]
print(second_smallest(x))
