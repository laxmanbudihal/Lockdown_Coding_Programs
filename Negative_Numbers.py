//Given start and end of a range, write a Python program to print all negative numbers in given range. 
start, end = -4, 19
  
# iterating each number in list 
for num in range(start, end + 1): 
      
    # checking condition 
    if num < 0: 
        print(num, end = " ") 