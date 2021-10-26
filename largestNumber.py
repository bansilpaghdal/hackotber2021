largest = -1
smallest = None
while True:
    num = input("Enter a number If all numbers are entered enter "done": ")
    if num == "done" :
        break
    else :
        try :
            num=int(num)
            if smallest is None :
                smallest=num
            elif num<smallest :
                smallest=num
            if num>largest :
                largest=num

        except :
            print("Invalid input")

print("Maximum is", largest)
print("Minimum is", smallest)

print()
input("Press any key to continue........")
