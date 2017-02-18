Lab5:	Lab5.o Stark.o Lannister.o Targaryen.o PFN.o Dothraki.o GuardiaReal.o
	g++ Lab5.o Stark.o Lannister.o Targaryen.o PFN.o Dothraki.o GuardiaReal.o -o Lab5

Main.o:	Stark.h Lannister.h Targaryen.h PFN.h  Dothraki.h GuardiaReal.h Lab5.cpp
	g++ -c Main.cpp

Stark.o:	Stark.cpp Stark.h PFN.h
	g++ -c Stark.cpp

FamiliasNobles.o:	PFN.cpp PFN.h
	g++ -c FamiliasNobles.cpp

Lannister.o:	Lannister.cpp Lannister.h GuardiaReal.h
		g++ -c Lannister.cpp

GuardiaReal.o:	GuardiaReal.cpp GuardiaReal.h
	g++ -c GuardiaReal.cpp


Targaryen.o:	Targaryen.cpp Targaryen.h Dothraki.h
	g++ -c Targaryen.cpp

Dothraki.o:	Dothraki.cpp Dothraki.h
	g++ -c Dothraki.cpp

clean:	rm ".o Lab5
