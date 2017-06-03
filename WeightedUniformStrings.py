#Times out on some cases

import sys

def char_to_sumlist(input_string):

    weightDict={'a':1,'b':2,'c':3,'d':4,'e':5,'f':6,'g':7, #Dictionary of words
    'h':8,'i':9,'j':10,'k':11,'l':12,'m':13,'n':14,'o':15,'p':16,
    'q':17,'r':18,'s':19,'t':20,'u':21,'v':22,'w':23,'x':24,'y':25,'z':26
    }

    uniform_string_sumlist = list()
    prev = '0' #Initialize any non alphabet character
    prevSum = 0

    for char in input_string:
        if char is prev:
            prevSum+=weightDict[char]
        else:
            prevSum=weightDict[char]

        uniform_string_sumlist.append(prevSum)
        prev=char

    return uniform_string_sumlist

s = raw_input().strip()
n = int(raw_input().strip())

strsum_list = char_to_sumlist(s)

for a0 in xrange(n):
    x = int(raw_input().strip())
    if x in strsum_list:
        print "Yes"
    else:
        print "No"
