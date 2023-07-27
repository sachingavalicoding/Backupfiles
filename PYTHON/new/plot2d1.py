import numpy as np
from pylab import *

x = linspace(-1,1,100)
f = x**2
g = x**3

plot(x,f)
plot(x,g)
show()