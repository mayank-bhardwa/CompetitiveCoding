import sys
sys.stdin = open('input.txt', 'r')
sys.stdout = open('output.txt', 'w')

n = int(input())
asci = 96+n

l = (n-1)*4 + 1
w = 2*n-1
mat = [['-']*l for i in range(w)]
k = 1
for i in range(w//2 + 1):
	word = ''
	for j in range(k):
		word = word + chr(asci-j) + '-'

	word = word[:-1]
	word1 = ''
	for j in range(k-1):
		word1 = word1+ chr(asci-j) + '-'
	k+=1
	word = word+word1[::-1]

	left = l - len(word)
	left = left//2
	word = '-'*left + word + '-'*left
	print(word)

k = k-2
for i in range(w//2):
	word = ''
	for j in range(k):
		word = word + chr(asci-j) + '-'

	word = word[:-1]
	word1 = ''
	for j in range(k-1):
		word1 = word1+ chr(asci-j) + '-'
	k-=1
	word = word+word1[::-1]

	left = l - len(word)
	left = left//2
	word = '-'*left + word + '-'*left
	print(word)