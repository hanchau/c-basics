MAKEFLAGS += --silent

run:
	gcc src/all.c -o bin/all.bin
	echo "Build Completed! \n\nOutput"
	./bin/all.bin