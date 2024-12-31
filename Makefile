all:
	g++ -D__linux__ -CC HCodeGen.cpp -o HCodeGen
	
clean:
	rm HCodeGen
