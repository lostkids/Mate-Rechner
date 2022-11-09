all:
	g++ -v mate.cpp -o mate
clean:
	rm -v mate
install:
	sudo cp -v mate /usr/bin/mate
uninstall:
	sudo rm -v /usr/bin/mate