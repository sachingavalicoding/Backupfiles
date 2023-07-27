import numpy as np 
import matplotlib.pyplot as plt 

center = np.array([1,2])

radius = 1

#calculate the cordinaets of the hexagonal 
angles = np.linspace(0,2* np.pi,7)[:-1]

x = center[0] * radius  * np.cos(angles)
y = center[1] * radius * np.sin(angles)

plt.plot(x,y,'-o', color ='b', label = 'hexa')
plt.xlabel('x')
plt.ylabel('y')

plt.title('Hexa shape')

plt.grid(True)
plt.axis('equal')
plt.legend()
plt.show()


# calculated the area of hexa gonal 
