all: euler_1.dat  implicit_1.dat 

%.dat: JuanVelasquez_Ejercicio25.x
	./JuanVelasquez_Ejercicio25.x

JuanVelasquez_Ejercicio25.x: JuanVelasquez_Ejercicio25.cpp
	c++ JuanVelasquez_Ejercicio25.cpp -o JuanVelasquez_Ejercicio25.x

clean:
	rm -rf *.x *.dat