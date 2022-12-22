l = eval(input("Enter l: "))
def minout(l):
	l.sort()
	c=0
	for i in l:
		if i != c:
			return c
		else:
			c+=1
print(minout(l))
