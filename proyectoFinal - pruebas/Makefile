run: RFJ.exe
	./RFJ.exe

RFJ.exe: mainprueba.cpp bibRFJ.hpp miniwin.hpp bibRFJ.o miniwin.o
	g++ mainprueba.cpp bibRFJ.o miniwin.o -mwindows -o RFJ.exe

bibRFJ.o: bibRFJ.cpp bibRFJ.hpp
	g++ -c bibRFJ.cpp -o bibRFJ.o

miniwin.o: miniwin.cpp miniwin.hpp
	g++ -c miniwin.cpp -o miniwin.o