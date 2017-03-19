#Minimum absolute difference

numEle=int(raw_input())
inputList = map(int,list(raw_input().split()))

inputList.sort()

minList = inputList[len(inputList)-1]

for i in range(0,len(inputList)-1):
    if abs(inputList[i] - inputList[i-1]) <= minList:
        minList = abs(inputList[i] - inputList[i-1])
print minList
