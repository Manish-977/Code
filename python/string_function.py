#string functions

#str ="i am coder"
#str.endswith("er") #returns true if string ends with substr
str ="I am studying python from Apnacollege"
print(str.endswith("ege"))
#str.capitalize()  #capitalizes 1st char
str ="i am studying python from Apnacollege"
str=str.capitalize()
print(str.capitalize())
print(str)
#str.replace(old,new) #replaces all occurrences of old 
str ="I am studying python from Apnacollege"
print(str.replace("o","a"))
#str.find(word) #returns 1st index of 1st occurrer
str ="I am studying python from Apnacollege"
print(str.find("e"))
#str.count("am") #counts the occurrence of substring
str ="I am studying python from Apnacollege"
print(str.count("e"))
