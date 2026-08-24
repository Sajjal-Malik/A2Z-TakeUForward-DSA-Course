# 1
# 1 2
# 1 2 3
# 1 2 3 4
# 1 2 3 4 5

def print_right_angle_number_pattern(n):

    # Outer loop controls the rows. It runs 'n' times (once for each row)
    for i in range(1, n + 1, 1):

        # Inner loop for columns, iterating up to the current row number 'i'
        for j in range(1, i + 1, 1):
            print(j, end=" ")

        # Move to the next line after each row is complete
        print()

num = input("Enter the number of rows for the right-angled number pyramid pattern: ")
print_right_angle_number_pattern(int(num))
