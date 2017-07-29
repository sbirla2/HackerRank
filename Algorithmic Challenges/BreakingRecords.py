
numRec = int(raw_input())
recordList = map(int,list(raw_input().split()))

bestCount = 0
badCount = 0
bestYet = int(recordList[0])
worstYet = int(recordList[0])

for i in range(1,len(recordList)):
    if recordList[i] == bestYet or recordList[i] == recordList[i-1] or recordList[i] == worstYet:
        continue
    elif recordList[i] < recordList[i-1] and recordList[i] < worstYet:
        worstYet = recordList[i]
        badCount+=1
    elif recordList[i] > recordList[i-1] and recordList[i] > bestYet:
        bestCount+=1
        bestYet = int(recordList[i])

print bestCount,badCount
