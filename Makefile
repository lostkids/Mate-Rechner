all:
	g++ -v mate.cpp -o mate
clean:
	rm -v mate
install:
	sudo cp mate /usr/bin/mate