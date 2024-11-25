
Calculator: Calc.o driverCalc.o
	g++ Calc.o driverCalc.o -o Calculator -std=c++20
	
Calc.o: Calc.cpp
	g++ -c Calc.cpp -o Calc.o -std=c++20
	
driverCalc.o: driverCalc.cpp
	g++ -c driverCalc.cpp -o driverCalc.o -std=c++20
	
clean:
	rm *.o

