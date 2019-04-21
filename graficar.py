import numpy as np
import matplotlib.pyplot as plt

a = np.loadtxt("euler_1.dat")
b = np.loadtxt("implicit_1.dat")

plt.figure(figsize = (15,10))

plt.subplots(2,1,1)
plt.plot(a[:,0],a[:,1])
plt.xlabel("Tiempo (t)")
plt.ylabel("Posicion (y)")
plt.title("Esquema de Euler")

plt.subplots(2,1,2)
plt.plot(b[:,0],b[:,1])
plt.xlabel("Tiempo (t)")
plt.ylabel("Posicion (y)")
plt.title("Esquema implícito")

plt.savefig("Gráfica.png")