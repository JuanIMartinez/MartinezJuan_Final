import numpy as np
import matplotlib.pylab as plt
from mpl_toolkits.mplot3d import axes3d

x=np.genfromtxt("datos.dat",usecols=(0))
y=np.genfromtxt("datos.dat",usecols=(1))





plt.figure(figsize=[10,10])
plt.plot(x,y, c="royalblue", label="trayectoria", linewidth=0.7)
plt.scatter(x,y, c="r", label="steps", s=5.)
plt.xlabel("x")
plt.ylabel("y")
plt.title("Desplazamientoen el tiempo")
plt.legend()
plt.grid()
plt.savefig("MartinezJuan_final_15.pdf")
plt.close()

