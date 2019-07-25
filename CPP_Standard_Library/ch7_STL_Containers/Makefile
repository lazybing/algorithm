CC=g++
CXXFLAGS=-std=c++11 -O2 -Wunused-variable -Werror
All:
	$(CC) -g $(CXXFLAGS) square_template.cpp -o square_template
	$(CC) -g $(CXXFLAGS) vector.cpp -o vector
	$(CC) -g $(CXXFLAGS) squence.cpp -o squence
	$(CC) -g $(CXXFLAGS) array.cpp -o array

.PHONY:clean
clean:
	-rm -f square_template vector squence array
