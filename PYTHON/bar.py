#sleep 1. 3 bar represent 

import matplotlib.pyplot as plt

x_index = [1,2,3,4,5]
y_values = [60,4000,2000,1500,700]

data= ['Clothing', 'food','rent','petrol','misc']

plt.bar(x_index,y_values,data= data, width=0.7, color =['red','green'])
plt.xlabel('X')
plt.ylabel('Y')
plt.show()