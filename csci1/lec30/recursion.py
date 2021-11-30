# returns n!
def fact(n):
  if n == 1:
    # base case
    return 1
  else:
    # recursive case
    x = fact(n-1)
    return n * x

print(fact(5))

# returns n^m
def pow(n, m):
  if m == 0:
    # base case
    return 1
  else:
    # recursive case
    return n * pow(n, m-1)

print(pow(2.5, 5))

# returns the sum of all the elements in L,
# using a divide and conquer strategy!
def recursive_sum(L):
  if len(L) == 0:
    # the sum of all the elems in an empty list is 0
    return 0
  elif len(L) == 1:
    # the sum of all the elems in a length 1 list is
    # the single element inside
    return L[0]
  else:
    # recursive case: >= 2 elements in L
    # let's split L in half (divide)
    length_over_2 = len(L) // 2
    left_half = L[0:length_over_2]
    right_half = L[length_over_2:len(L)]

    # let's get the sum of each half (conquer)
    left_sum = recursive_sum(left_half)
    right_sum = recursive_sum(right_half)

    # the final answer is the total sum
    return left_sum + right_sum

print(recursive_sum([8, 6, 7, 5, 3, 0, 9, 2]))
