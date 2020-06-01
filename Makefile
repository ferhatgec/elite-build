# MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#


PREFIX = /bin/
INCLUDEDIR = ./include/src/
CFLAGS = -c -Wall -I$(INCLUDEDIR)

SRCSYNTAXDIREC = ./src/Syntax/
SRCFILEDIREC = ./src/File/
SRCDIREC = ./src/

GCC = gcc
GPP = g++
COMP = g++ -c
HECOMP = g++ -c $< -std=gnu++17 -o
# CLEAN
CLEANALL = elitebuild
CLEAN = *.o

HEADERFILE = File.o
SYNTAXFILE = Syntax.o

ifeq ($(OS),Windows_NT)
	echo Windows_NT is not supported!
	#CLEAN := del $(CLEAN)
	#CLEANALL := del $(CLEANALL)
else
	CLEAN := rm -f $(CLEAN)
	CLEANALL := rm -f $(CLEANALL)
endif


all: headersfile main clean

allp: headersfile mainc clean 

removeall: uninstall cleanall

runall: all run

gra: runall git

git:
	git add .
	git commit -a
	git push origin master

push:
	git push origin master

nall: cleanall

headersfile: $(HEADERFILE)
syntaxfile: $(SYNTAXFILE)

%.o: $(SRCSYNTAXDIREC)%.cpp	
	$(GPP) $(CFLAGS) -c $< -o $@

%.o: $(SRCFILEDIREC)%.cpp
	$(GPP) $(CFLAGS) -c $< -o $@

main: $(SRCDIREC)Elitebuild.cpp
	$(GPP) $< $(HEADERFILE) -o elitebuild
	echo Elitebuild building successfully!

mainc: $(SRCDIREC)Elitebuild.cpp
	$(GPP) $(CFLAGS) $< $(HEADERFILE) -o /bin/elitebuild
	echo Elitebuild building successfully in Bin Directory!

uninstall:
	rm -f /bin/elitebuild
	
run:
	./elitebuild
clean:
		$(CLEAN)

cleanall:
		echo Cleaning build directory!
		$(CLEANALL)
