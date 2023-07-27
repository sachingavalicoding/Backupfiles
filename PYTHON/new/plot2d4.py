#f(x) = x ^ 4 in [0,5]
import numpy as np
from pylab import *

x = np.linspace(0,5,100)
y = x ** 4
plot(x,y, color='red', ls='--',marker='o')
xlabel('x')
ylabel('y')
legend()
show()