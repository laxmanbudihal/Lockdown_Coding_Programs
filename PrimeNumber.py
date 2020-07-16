/*Question

Given two positive integer start and end. The task is to write a Python program to print all Prime numbers in an Interval


ANS:
*/
start = 1
end = 25
  
for val in range(start, end + 1): 
    if val > 1: 
        for n in range(2, val//2 + 2): 
            if (val % n) == 0: 
                break
            else: 
                if n == val//2 + 1: 
                    print(val) 