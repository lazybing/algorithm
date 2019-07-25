CC=g++
CXXFLAGS=-std=c++11 -O2 -Wunused-variable -Werror
All:
	$(CC) -g $(CXXFLAGS) stack.cpp -o stack
	$(CC) -g $(CXXFLAGS) stack_user.cpp -o stack_user
	$(CC) -g $(CXXFLAGS) queues.cpp -o queue
	$(CC) -g $(CXXFLAGS) bitset.cpp -o bitset

.PHONY:clean
clean:
	-rm -f stack stack_user queue bitset
