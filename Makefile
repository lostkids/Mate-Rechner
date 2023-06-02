all:
	g++ -v mate.cpp mate.hpp -o mate
clean:
	rm -v mate
install:
	sudo cp -v mate /usr/bin/mate
uninstall:
	sudo rm -v /usr/bin/mate
