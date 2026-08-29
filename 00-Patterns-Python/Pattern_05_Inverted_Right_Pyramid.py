# * * * * *
# * * * *
# * * *
# * *
# *

def inverted_right_pyramid_pattern(n):

    # Outer loop controls the rows. It runs 'n' times (once for each row)
    for i in range(1, n + 1, 1):

        # Inner loop controls the columns (numbers printed in the current row
        for j in range(1, n - i + 2, 1):
            print("* ", end="")

        # Move to the next line after each row is complete
        print()

num = input("Enter the number of rows for the inverted right pyramid pattern: ")
inverted_right_pyramid_pattern(int(num))
