BankAccount: money.o account.o main.o
	g++ -std=c++11 money.o account.o main.o -o BankAccount

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

account.o: account.cpp account.h
	g++ -std=c++11 -c account.cpp

money.o: money.h money.cpp
	g++ -std=c++11 -c money.cpp

clean:
	rm *.o BankAccount