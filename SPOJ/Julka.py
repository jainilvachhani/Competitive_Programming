t = 10
while(t!=0):
	t = t-1
	n = int(input())
	d = int(input())
	x = int(n/2)
	if (d%2==0):
		d  = d/2
	else:
		d = (d/2) + 1
	a = x + d
	b = n - a
	print(int(a))
	print(int(b))