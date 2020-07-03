CC = gcc
file = helloworld.c
bin = app

.PHONY = build run

all: build run

# compile the first
build: $(file)
	@$(CC) $< -o $(bin) -Wall

run: $(bin)
	@./$(bin)
    
clean:
	@rm $(bin)
