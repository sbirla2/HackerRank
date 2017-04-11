
import sys

refString = "hackerrank"
refStrList = list(refString.strip())

numofWords = int(raw_input())

for line in sys.stdin:
    flag = True
    for lettter in refStrList:
        if lettter not in list(str(line).strip()):
            flag = False
            break
    if flag == True:
        print "YES"
    else:
        print "NO"
