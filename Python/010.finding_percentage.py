if __name__ == '__main__' :
    n = int(raw_input())

    # initialize a dictionary
    student_marks = {}

    # give the student records in the input
    for _ in range(n) :
        line = raw_input().split()
        name, scores = line[0], line[1:]
        scores = map(float, scores)
        student_marks[name] = scores

    # give a student record query
    query_name = raw_input()
 
    if query_name in student_marks.keys() :
        query_scores = student_marks[query_name]
        avg = (query_scores[0] + query_scores[1]+query_scores[2]) / 3.0
        print("%.2f" % avg)
    else :
        print("The query does not exist in the database!")
