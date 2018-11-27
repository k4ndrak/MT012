#!/bin/bash

CC=gcc
TARGETS=mt-main.c
CFLAGS=-O3
DEP_DIR=${PWD}/include/
LIBS=-lm -lpthread
VERSION=-std=gnu11
OUT=turing_machine

DOXYGEN=doxygen
DOXYGEN_FILE=mt-main.conf

DEP_MODEL=equipe_MODELO.c
DEPS_MD=$(DEP_DIR)$(DEP_MODEL)

#INC=-I${PWD}/include/

all: ${DEP_DIR}/equipe_MODELO.h 
	$(CC) $(CFLAGS) $(TARGETS) $(DEPS_MD) -o $(OUT) -IC $(LIBS) $(VERSION)
	$(DOXYGEN) $(DOXYGEN_FILE)

${DEP_DIR}/equipe_MODELO.h:	
	@echo ".. "
	$(CC) $(CFLAGS) -c $(DEPS_MD) $(VERSION)

doc:
	$(DOXYGEN) -g $(DOXYGEN_FILE)

clean:
	rm -f *.o $(OUT)
