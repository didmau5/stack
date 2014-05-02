all: stackRun


stackRun: stackRun.cpp
	
	g++ stack.h
	g++ stackRun.cpp -o stackRun

clean:

	rm stackRun