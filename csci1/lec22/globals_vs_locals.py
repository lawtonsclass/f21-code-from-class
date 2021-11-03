x = 42 # x is a global variable

def my_function():
  # you can get the value of a global inside a function
  # all you want, but you can't *set* it unless you say
  global x # Python, assume when I set x I mean the global x
  
  print('printing x from my_function:', x)
  y = 43
  print('printing y from my_function:', y)

  x = x + 1 # allowed because of the global declaration

my_function()
print('printing x from outside any function:', x)
print('printing y from outside any function:', y)
