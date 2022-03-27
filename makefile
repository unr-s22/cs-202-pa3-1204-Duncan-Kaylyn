BankAccount: money.o main.cpp
	g++ -o BankAccount money.o main.cpp

money.o: money.h money.cpp
	g++ -c money.cpp