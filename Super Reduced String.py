import re

word, prevword = input(), ''

while word != prevword:
    prevword, word = word, re.sub(r'(.)\1', '', word)

print(word if word else 'Empty String')
