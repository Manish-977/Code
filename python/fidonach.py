a=int(input("enter the number="))
def fb(x):
    if(x==0):
        return 1
    if(x==1):
        return 1
    return x * fb(x-1)
print(fb(a))