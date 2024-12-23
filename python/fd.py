# Fibonacci Series Code without recursion
a=int(input("Enter the number="))
def fibb(n):
    a=0
    b=1
    next=a+b
    while(n-1>0):
        a=b
        b=next
        next=a+b
        print(b)
        n=n-1
print("fibonacci", fibb(a))
    
        