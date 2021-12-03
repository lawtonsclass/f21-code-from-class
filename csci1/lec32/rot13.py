def rot13_char(c):
  chars =           "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
  encrypted_chars = "NOPQRSTUVWXYZABCDEFGHIJKLM"

  # go through chars to find the index of c
  char_index = 0
  while chars[char_index] != c:
    char_index = char_index + 1 # go look at the next index
  
  # go to the same index of encrypted_chars
  return encrypted_chars[char_index]

def rot13(s):
  result_string = ""
  
  # go through every char in s
  for i in range(len(s)):
    # encrypt it
    result_string = result_string + rot13_char(s[i])
  
  return result_string

message = "HELLO"
encrypted_hello = rot13(message)
print(encrypted_hello)
decrypted = rot13(encrypted_hello)
print(decrypted)
