def is_leap(year) :
    if year % 100 == 0:
        if year % 400 == 0:
            return True
        else:
            return False
    # Not divisible by 100
    if year % 4 == 0:
        return True

    return False

year = int(input())
print(is_leap(year))
