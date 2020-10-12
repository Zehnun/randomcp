test = int(input())

for i in range(test):
    numhouse, money = input.split()
    numhouse = int(numhouse)
    money = int(money)
    for i in range(numhouse):
        houses = input.split()
        houses = int(houses)
        
        houses.sort()
        
        ans = 0
        for i in range(houses):
            if i >= money:
                i += houses[i]
                
    print("Case #","end=")
	print(i, ": ", "end=")
	print(ans)
