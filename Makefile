all:
	g++ -v mate.cpp -o mate
clean:
	rm -v *.out mate
install:
	sudo cp mate /usr/bin/mate