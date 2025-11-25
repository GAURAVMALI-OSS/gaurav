n = int(input("Enter number: "))

prime = True
for i in range(2, int(n**0.5) + 1):
    if n % i == 0:
        prime = False
        break

print("Prime" if prime and n > 1 else "Not Prime")
