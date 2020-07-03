CC = gcc
files = marray.c marray.h main.c
bin = app

.PHONY = build run clean

all: build run

build: $(files)
	@clear
	@$(CC) $(files) -o $(bin) -Wall

run: $(bin)
	@./$(bin)
    
clean: $(bin)
	@rm $(bin)
	
git-am: $(files)
	@git add $(files)
	@git commit -m "$(files)"
    
git-push: $(files)
	@git push -u origin master
