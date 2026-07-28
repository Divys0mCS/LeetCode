class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        found = 0
        for i in range(0,len(matrix)):
            for j in range(0,len(matrix[i])):
                if matrix[i][j] == target :
                    found += 1
        if found == 0:
            return False
        else:
            return True