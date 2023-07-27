#f(x) = cos(x) interval = [0,2pi]

import numpy as np 
from pylab import *

x = np.linspace(0,2* np.pi)
y = np.cos(x)

plot(x,y)
show()