import sys
x = int(input())

c = ''
p = ''
ise = False
iso = False

word = [""]

for i in range(x):
  c = sys.stdin.read(1)
  word.append(c)
  
word.append(" ")
word.append(" ")
word.append(" ")
ise = False

for i in range(1,x+1):
  if word[i] == "a" or word[i] == "i" or word[i] == "u" or word[i] == "y":
    iso = False
    ise = False
    if word[i-1] == word[i]:
      continue;
  if word[i] == "e":
    iso = False
    if ise is True:
      continue
    if i < x+1:
      if word[i] == word[i+1] and word[i] == word[i+2]:
        print(word[i], end="")
        ise = True
        continue;

  if word[i] == "o":
    ise = False
    if iso is True:
      continue
    if i < x+1:
      if word[i] == word[i+1] and word[i] == word[i+2]:
        print(word[i], end="")
        iso = True
        continue;

  ise = False
  iso = False
  print(word[i], end="")