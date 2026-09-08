

def half_diamond_star_pattern(n):
    for i in range(1, n * 2, 1):

        stars = i
        if i > n:
            stars = 2 * n - i

        for j in range(1, stars + 1, 1):
            print("*", end="")

        print()

num = input("Enter the number of rows for the Half Diamond star pyramid pattern: ")
half_diamond_star_pattern(int(num))
