# x = 1           #int
# y = 2.5         #float
# name = 'John'   #str
# is_cool = True  #bool

# Multiple Assignment
x, y, name, is_cool = (1, 2.5, 'John', True)

# Basic math
a = x+y
#print(x, y, name, is_cool, a)

#Casting
x = str(x)
#y = int(y) bu durumda y 2.5 dan 2 ye esitlenir ve 2 olarak kalir!
z = float(y)

print(type(z),z)