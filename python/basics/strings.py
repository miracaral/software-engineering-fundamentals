# Strings in python are surrounded by either single or double quotation marks
# Let's begin with formmatting some string methods!

#name = 'Mirach'
#age = 19

#Concatenate
#print('Hello My Name is ' + name + ' and I am ' + str (age))

#Arguments by position
#print('My name is {name} and I am {age}'.format(name=name, age=age)) #curly braces are placeholders!!!

# F-Strings (3.6 version or after!)

#print(f'Hello, my name is {name} and I am {age}')

s = 'hello world'

#Capitalize string
print(s.capitalize())

# Make all uppercase
print(s.upper())

# Make all lower
print(s.lower())

# Swap case
print(s.swapcase())

# Get length
print(len(s))

# Replace
print(s.replace('world', 'everyone'))

# Count
sub = 'h'
print(s.count(sub))

# Starts with
print(s.startswith('hello'))

# Ends with
print(s.endswith('d'))

# Split into a list
print(s.split())

# Find position
print(s.find('r'))

# Is all alphanumeric
print(s.isalnum())

# Is all alphabetic
print(s.isalpha())

# Is all numeric
print(s.isnumeric())