import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation


a = np.loadtxt("../solution/nstep_{}".format(1),delimiter=",")
plt.plot(a[:,0],a[:,1],'ko')
plt.axis('equal')
plt.show()

#%%

fig, ax = plt.subplots()
n = 5000
a = []
for ii in range(1,n,20):
    a.append(np.loadtxt("../solution/nstep_{}".format(ii),delimiter=","))

def animate(i):
    ax.clear()
    ax.plot(a[i][:,0],a[i][:,1],'k-o',markersize=4)
    ax.axis('equal')
    ax.set_xlim([-1,1])
    ax.set_ylim([-2,1])
    print(i)
    ax.text(5,5,str(i))



ani = FuncAnimation(fig, animate, frames=n, interval=1000/60, repeat=False)

plt.show()
