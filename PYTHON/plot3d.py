#sleep no 1. 2 

import matplotlib.pyplot as plt 
import numpy as np 

#genrate x values 
x = np.linspace(-5,5,100)
#genrate y value using function 

y = np.exp(-x**2)


#create 3dplot 
fig = plt.figure()
ax = fig.add_subplot(111,projection='3d')

ax.plot(x,y,np.zeros_like(x), linestyle= 'dashed', color='green' )

ax.set_xlabel('x')
ax.set_ylabel('Y')
ax.set_title(' 3d Graph f(x) = e ** -x ** 2')
plt.show()