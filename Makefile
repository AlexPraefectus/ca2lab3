DEST ?= build

compile:
	mkdir -p $(DEST)
	g++ -o $(DEST)/main main.cpp

run:
	./$(DEST)/main

clean:
	rm -rf $(DEST)
