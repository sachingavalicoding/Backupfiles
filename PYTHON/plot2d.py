#sleep no 1 . 1 

import matplotlib.pyplot as plt
import numpy as np

def f(x):
    return x ** 2

def g(x):
    return x**3

x = np.linspace(-1,1,100)
y_f = f(x)
y_g = g(x)

fig,ax = plt.subplots()

ax.plot(x,y_f,label = '( f(x) = x ^ 2)')
ax.plot(x,y_g,label = ('g(x) = x ^ 3'))

ax.set_xlabel('x')
ax.set_ylabel('y')
ax.legend()
ax.set_title('2s ')