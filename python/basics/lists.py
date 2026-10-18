# Create list
numbers = [1, 2, 3, 4, 5]
fruits = ['Apples','Oranges','Grapes','Pears']

import sys
import keyword
import operator
from datetime import datetime
import os

#Use a constructor
#numbers2 = list((1, 2, 3, 4, 5))


# Get a value
print(fruits[1]) # 1 means the ranking of 'oranges' word's

# Get length
print(len(fruits))

# Append to list
fruits.append('Mangos')

# Remove from list
fruits.remove('Grapes')

# Insert into position
fruits.insert(2, 'Strawberries')   

# Change value
fruits[0] = 'Blueberries'

# Remove with Pop
fruits.pop(2)

# Reverse List
fruits.reverse()

# Sort List
fruits.sort()

# Reverse sort
fruits.sort(reverse=True)

print(fruits)

print('Hello,world\n')

print(keyword.kwlist)