n = int(input("enter the total no of rows in pattern:"))
for i in range (1 , n + 1) :
    print(" " * (n - i) , end="")
    print("*" * (2 * i -1))
    