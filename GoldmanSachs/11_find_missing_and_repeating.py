class Solution:
    def findTwoElement(self, arr, n):
        i = 0
        sm = 0
        
        while i < len(arr):
            v = abs(arr[i])
            sm += v
            if arr[v-1] < 0:
                b = v
            else:
                arr[v-1] = - arr[v-1]
            i+=1
        
        a = (n * (n+1) // 2) - sm + b
        return b, a
