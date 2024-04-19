def maximize_x(x):
    x_str = list(str(x))
    n = len(x_str)
    last_non_zero = n - 1
    
    # Find the rightmost non-zero digit
    while last_non_zero >= 0 and x_str[last_non_zero] == '0':
        last_non_zero -= 1
    
    if last_non_zero < 0:
        return x
    
    # Increment the last non-zero digit
    x_str[last_non_zero] = str(int(x_str[last_non_zero]) + 1)
    
    # Update the digits to the right of the incremented digit
    for i in range(last_non_zero + 1, n):
        x_str[i] = '0'
    
    return int(''.join(x_str))

# Read the number of test cases
t = int(input())

for _ in range(t):
    # Read the integer x for each test case
    x = int(input())
    
    # Find the maximum possible value of x after operations
    max_x = maximize_x(x)
    
    # Print the result
    print(max_x)
