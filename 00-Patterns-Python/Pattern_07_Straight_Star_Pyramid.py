#     *
#    ***
#   *****
#  *******
# *********

def star_pyramid_pattern(n):

    # The outer loop controls the rows
    for i in range(1, n + 1, 1):

        for j in range(1, n - i + 1, 1):
            print("", end=" ")

        for j in range(1, i * 2, 1):
            print("*", end="")

        # Move to the next line after the row is complete
        print()

num = input("Enter the number of rows for the star pyramid pattern: ")
star_pyramid_pattern(int(num))
