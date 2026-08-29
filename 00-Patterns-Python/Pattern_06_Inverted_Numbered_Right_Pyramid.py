# 1 2 3 4 5 6
# 1 2 3 4 5
# 1 2 3 4
# 1 2 3
# 1 2
# 1

def inverted_number_right_pyramid_pattern(n):

    # Outer loop controls the rows. It runs 'n' times (once for each row)
    for i in range(1, n +1, 1):

        # Inner loop controls the columns (numbers printed in the current row
        # 'n - i + 1 times'
        for j in range(1, n - i + 2, 1):
            print(j, end=" ")

        # Move to the next line after each row is complete
        print()

num = input("Enter the number of rows for the inverted number right pyramid pattern: ")
inverted_number_right_pyramid_pattern(int(num))
