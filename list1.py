n = int(input("enter the no. of elements you wish to see in the list\n"))
listA = []
print("enter the elements")
for i in range(0, n):
	a = int(input())
	listA.append(a)
print(listA)
print("is your 1st list")
m = int(input("enter the no. of elements you want in the 2nd list\n"))
listB = []
print("enter the elements")
for i in range(0, m):
	b = int(input())
	listB.append(b)
print(listB)
print("is you 2nd list")
def listdiff(list1, list2):
	for i in list1:
		if i in list2:
			list1.remove(i)
			list2.remove(i)
listdiff(listA, listB)
listC = listA + listB
listC.sort()
print(listC)

