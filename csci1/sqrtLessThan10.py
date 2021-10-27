import math

i = 0
didWeFindACounterexample = False

while i <= 101:
  # try i
  if math.sqrt(i) > 10:
    print("False!")
    didWeFindACounterexample = True

  # advance i
  i = i + 1

# if we get here without ever finding a counterexample, the statement was true!
if not didWeFindACounterexample:
  print("True!")
