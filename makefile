#this is the makefile for citizen program
#defining compiler

CC = g++

#cflags -g adds debugging info
#-Wall adds warning

CFLAGS= -g -Wall

#defining name of executable

default: citizen

# command to generate executable

$(name): citizen.o main.o

	 $(CC) $(CFLAGS) -o citizen citizen.o main.o

#to create the citizen.o we need following command

citizen.o: citizen.cpp citizen.h
	
	   $(CC) $(CFLAGS) -c citizen.cpp

#to create the main.o

main_citizen.o: citizen.h main.cpp

		$(CC) $(CFLAGS) -c main.cpp

#to start form scratch type 'make clean'
#this will remove executable and objects files
#to make backup *~

clean:

	$(RM) citizen *.o *~
 

