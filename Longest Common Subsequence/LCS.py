def LCS(A, B, j, k):
    if j == len(A) or k == len(B):
        return ""

    if A[j] == B[k]:
        return A[j] + LCS(A,B, j+1, k+1)

    resA = LCS(A,B, j+1, k)
    resB = LCS(A,B, j, k + 1)

    if len(resA) > len(resB):
        return resA
    else:
        return resB

A = "ABCAS33AS"
B = "BASWQSSAASD"
print(LCS(A,B,0,0))

