all:
	  gcc test.cpp main.cpp  -lpthread  -o  my-c 
clean:
	rm my-c.exe
