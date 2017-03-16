#Grading Student HAckerrank solution

import sys

numEle = int(raw_input()) #Enter number of elements

for line in sys.stdin:
    lineVal=int(line)
    if lineVal > 37:
        if int(lineVal+2) % 5 == 0:
            print lineVal+2
        elif int(lineVal+1) % 5 == 0:
            print lineVal+1
        else:
            print lineVal
    else:
        print lineVal
