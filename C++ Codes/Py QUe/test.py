from math import*
neutron = [0.6, -0.3, 0.5]
weight = [0.4, 0.8, -0.2]
# print('TestCases-', end=' ')
# for i in range (len(neutron)):
#     print('N%d' %len(i+1), end=' ')
print('Testcase     Neutron     Weight      Output ', end=" ")
for i in range(len(neutron)):
    sum = 0
    sum = neutron[i] * weight[i]
    sn = 1
    print('N %8d %8.6f %8.6f' %i %neutron[i] %weight[i])
    # print('Neutron Output = %8.6f' % tanh(sum))
# sum2 = neutron[0] * weight[0]
# print('%8.6f' % tanh(sum2))

# print('Index', end='')
# for i in range(len(neutron)):
#     print("%8d" % i, end='')


# Output the following produced by this program:
# Index    -->   0       1       2       3       4       5       6       7
# x    Input-->    0.5000  0.2000  0.7000 -0.6000  0.4000 -0.2000  1.0000 -0.3000
# DCT(x)  output ==>  1.7000  0.4244  0.6374  0.4941 -1.2021  0.5732 -0.4936  2.3296

# from  math import * 
# x = [0.5, 0.2, 0.7, -0.6, 0.4, -0.2, 1.0, -0.3]
# # Compute the DCT coefficients
# dct_coef = [[i for i in range(len(x))] for j in range(len(x))]
# for n in range(len(x)):
#     for k in range(len(x)):
#         dct_coef[n][k] = cos((pi/len(x))*(n + 1/2)*k)

# # Compute the DCT
# x_dct = [i for i in range(len(x))]
# for k in range(len(x)):
#     x_dct[k] = 0
#     for n in range(len(x)):
#         x_dct[k] += x[n]*dct_coef[n][k]

# # Print the results
# print('Index', end='')
# for i in range(len(x)):
#     print("%8d" % i, end='')

# print('\nx      ', end='')
# for i in range(len(x)):
#     print("%8.4f" % x[i], end='')

# print('\nDCT(x) ', end='')
# for i in range(len(x)):
#     print("%8.4f" % x_dct[i], end='')