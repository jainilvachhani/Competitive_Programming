t = int(input())
while (t !=0):
	t = t-1
	n = int(input())
	i = 1 
	fac = 1
	while(i<=n):
		fac = fac * i
		i = i+1
	print fac