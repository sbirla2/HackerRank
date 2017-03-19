numofEle=raw_input()

birdidList=map(int,list(raw_input().split()))

birdDict = dict()

for bird in birdidList:
    birdDict[bird]=birdDict.get(bird,0) + 1 #If Bird exist adds 1 is doesnt then creates bird id and adds 1

soretdbirdValues = sorted(birdDict.values())

print(list(birdDict.keys())[list(birdDict.values()).index(soretdbirdValues[len(soretdbirdValues)-1])])
