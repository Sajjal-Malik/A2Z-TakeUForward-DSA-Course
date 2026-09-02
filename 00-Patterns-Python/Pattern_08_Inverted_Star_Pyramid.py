#*********
# *******
#  *****
#   ***
#    *


def inverted_star_pyramid_patern(n):

    # Outer loop controls the rows
    for i in range(1, n + 1, 1):

        # First inner loop prints leading spaces.
        # The number of spaces increases with each row (i - 1)
        for j in range(1, i, 1):
            print(" ", end="")
        
        # Second inner loop prints the stars.
        # The number of stars decreases in each row. The total number of stars is 2*n - (2*i - 1)
        for j in range(1, 2 * (n - i + 1), 1):
            print("*", end="")

        # Move to the next line after the row is complete
        print()

num = input("Enter the number of rows for the inverted star pyramid pattern: ")
inverted_star_pyramid_patern(int(num))
