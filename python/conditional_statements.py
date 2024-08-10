#conditional statements
age =21
if(age>=18):
    print("can vote & apply for license")
    
#second
light="green"
if(light=="red"):
    print("stop")
elif(light=="green"):
    print("go")
elif(light=="yellow"):
    print("slow")#indentation
else:
    print("light id broken")
print("end of code")


#third
marks =int(input("enter the student marks :"))
if(marks>=90):
    grade ="A"
elif(marks >= 80 and marks < 90):
    grade = "B"
elif(marks >= 70 and marks < 80):
    grade = "D"
else:
    grade = "D"
print("grade of the student -> ",grade)

#Nesting coditional
age = 98
if(age >= 18):
    if(age >= 80):
        print("cannot drive")
    else:
        print("can driver")
else:
    print("cannot drive")