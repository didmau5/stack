all: stackRun


stackRun: LList.h LList.cpp stack.h stack.cpp stackRun.cpp
	
	g++ stack.h LList.h
	g++ stackRun.cpp -o stackRun

clean:
	rm stackRun