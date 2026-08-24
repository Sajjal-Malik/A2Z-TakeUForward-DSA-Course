# 1
# 2 2
# 3 3 3
# 4 4 4 4
# 5 5 5 5 5

def print_right_angled_number_patternII(n):
    # Outer loop controls the rows. It runs 'n' times (once for each row)
    for i in range(1, n + 1, 1):

        # Inner loop for columns, iterating up to the current row number 'i'
        for j in range(1, i +1, 1):
            print(i, end=" ")

        # Move to the next line after each row is complete
        print()

num = input("Enter the number of rows for the right-angled number pyramid pattern II: ")
print_right_angled_number_patternII(int(num))
