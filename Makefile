all:
	  gcc tty.cpp  main.cpp  -lpthread  -o  my-c.exe 
clean:
	rm my-c.exe
