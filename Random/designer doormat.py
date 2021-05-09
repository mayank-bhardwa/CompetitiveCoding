import sys

sys.stdout = open('output.txt','w')
sys.stdin = open('input.txt', 'r')

n,m = map(int,input().split())
w = n//2
l = m//2
mat = [['-']*l for i in range(w)]

k = 1
for i in range(w):
	x = 1
	for j in range(k):
		if(x%3==0):
			mat[i][l-j-1] = '|'
		else:
			mat[i][l-j-1] = '.'

		x += 1

	k += 3

for row in mat:
	rev = row[ : : -1]
	string = ''.join(row) + '|' + ''.join(rev)
	print(string)

string = '-'*((m-7)//2) + 'WELCOME' + '-'*((m-7)//2)
print(string)

for i in range(w-1,-1,-1):
	row = mat[i]
	rev = row[::-1]
	string = ''.join(row) + '|' + ''.join(rev)
	print(string)