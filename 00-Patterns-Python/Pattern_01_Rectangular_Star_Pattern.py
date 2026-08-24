# * * * * *
# * * * * *
# * * * * *
# * * * * *
# * * * * *

def print_rectangular_star_pattern(n):
    # Outer loop controls the rows. It runs 'n' times (once for each row)
    for i in range(1, n + 1, 1):
        # Inner loop for columns, iterating up to the size of array 'n'
        for j in range(1, n + 1, 1):
            print("*", end=" ")
        # Move to the next line after each row is complete
        print()

num = input("Enter the number of rows for the rectangular start pattern: ")
print_rectangular_star_pattern(int(num))
