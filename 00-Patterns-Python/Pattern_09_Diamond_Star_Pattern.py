#     *
#    ***
#   *****
#  *******
# *********
# *********
#  *******
#   *****
#    ***
#     *

def star_pyramid_pattern(n):
    for i in range(1, n + 1, 1):
        for j in range(1, n - i + 1, 1):
            print(" ", end="")
        for j in range(1, i * 2, 1):
            print("*", end="")
        print()

        
def inverted_star_pyramid_pattern(n):
    for i in range(1, n + 1, 1):
        for j in range(1, i, 1):
            print(" ", end="")
        for j in range(1, 2 * (n - i + 1) , 1):
            print("*", end="")
        print()


# Combines the top and bottom halves to print a complete diamond pattern
def diamond_pattern(n):
    star_pyramid_pattern(n)
    inverted_star_pyramid_pattern(n)

num = input("Enter the number of rows for the Diamond star pyramid pattern: ")
diamond_pattern(int(num))
