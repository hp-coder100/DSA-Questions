flowerStick = [11,7,5,10,46,23,16,8]
random = 3
#write your code here
ans = sorted(flowerStick[:random]) 
ans2 = list(reversed(sorted(flowerStick[random+1:])))
print(ans+ ans2)