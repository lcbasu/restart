
def column_check(list):
	result = True
	n = len(list)
	possible_no = []
	k = 1
	while k <= n:
		possible_no.append(k)
		k = k + 1
	i = 0
	while i<n:
		j = 0
		tmp_list = []
		while j<n:			
			if list[i][j] not in tmp_list:
				if list[i][j] <= n:
					if list[j][i] in possible_no:
						tmp_list.append(list[j][i])
			j = j + 1
		if len(tmp_list) < n:
			result = False
		i = i + 1
	return result

def row_check(list):
	result = True
	n = len(list)
	possible_no = []
	k = 1
	while k <= n:
		possible_no.append(k)
		k = k + 1
	i = 0
	while i<n:
		j = 0
		tmp_list = []
		while j<n:			
			if list[j][i] not in tmp_list:
				if list[j][i] <= n:
					if list[j][i] in possible_no:
						tmp_list.append(list[j][i])
			j = j + 1
		if len(tmp_list) < n:
			result = False
		i = i + 1
	return result	
def check_sudoku(list):
	if column_check(list) and row_check(list):
		return True
	return False
    
correct = [[1,2,3],
           [2,3,1],
           [3,1,2]]

incorrect = [[1,2,3,4],
             [2,3,1,3],
             [3,1,2,3],
             [4,4,4,4]]

incorrect2 = [[1,2,3,4],
             [2,3,1,4],
             [4,1,2,3],
             [3,4,1,2]]

incorrect3 = [[1,2,3,4,5],
              [2,3,1,5,6],
              [4,5,2,1,3],
              [3,4,5,2,1],
              [5,6,4,3,2]]

incorrect4 = [['a','b','c'],
              ['b','c','a'],
              ['c','a','b']]

incorrect5 = [ [1, 1.5],
               [1.5, 1]]


print check_sudoku(incorrect3)


    
    
#print check_sudoku(incorrect)
#>>> False

#print check_sudoku(correct)
#>>> True

#print check_sudoku(incorrect2)
#>>> False

#print check_sudoku(incorrect3)
#>>> False

#print check_sudoku(incorrect4)
#>>> False

#print check_sudoku(incorrect5)
#>>> False


