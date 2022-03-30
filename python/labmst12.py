def menu(case):
    if case == 1:
        print("\nFibonacci Series")
        n = int(input("Enter no. of terms: "))
        n1 = 0
        n2 = 1
        while(n>=0):
            print("$"*n1+str(n1))
            n3 = n1 + n2
            n1 = n2
            n2 = n3
            n = n - 1
        show_menu()
    elif case == 2:
        print("\nSum of digits")
        n = int(input("Enter number: "))
        sum = 0
        while (n > 0):
            digit = n%10
            sum = sum + digit
            n = n//10
        print("Sum of digits is",sum)
        show_menu()
    elif (case == 3):
        exit("\nSuccessfully exited!\n")

def show_menu():
    menu_no = int(input('\n---MENU---\n1. Fibonacci series\n2. Sum of digits\n3. Exit\nEnter menu no.: '))
    if menu_no not in range(1, 4):
        print("\nIncorrect choice")
        show_menu()
    else:
        menu(menu_no)

show_menu() 