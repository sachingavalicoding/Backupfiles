import matplotlib.pyplot as plt 
import numpy as np 

x = np.linspace(0,10,100)
y = np.log10(x)

plt.plot(x,y)
plt.xlabel('x')
plt.ylabel('y')

plt.title('2D Graph ')

plt.grid(True)
plt.show()