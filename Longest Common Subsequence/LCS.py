# https://www.hackerrank.com/challenges/linkedin-practice-dynamic-programming-lcs/problem?h_r=internal-search&isFullScreen=false
def LCS(A, B, j, k, dp):
    if j == len(A) or k == len(B):
        return ""

    if dp[j][k] != None:
        return dp[j][k]

    if A[j] == B[k]:
        dp[j][k] = A[j] + LCS(A,B, j+1, k+1, dp)
        return dp[j][k]

    resA = LCS(A,B, j, k + 1, dp)
    resB = LCS(A,B, j + 1, k, dp)

    if len(resA) > len(resB):
        return resA
    else:
        return resB

# main
_input = input().split(' ')
n = int(_input[0])
m = int(_input[1])

A = input().replace(" ", "")
B = input().replace(" ", "")

dp = [[None for i in range(m)] for i in range(n)]

res = LCS(A,B, 0, 0, dp)

ans = ""
for x in res:
    ans = ans + x + " "

print(ans)
