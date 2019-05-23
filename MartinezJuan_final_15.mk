MartinezJuan_final_15.pdf: plot.py datos.dat
	python plot.py
  
datos.dat: a.out
	./a.out
a.out : trayectoria.cpp
	g++ trayectoria.cpp

