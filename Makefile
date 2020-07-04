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
    
clean: $(bin)
	@rm $(bin)
	
git-am: $(files)
	@git add $(files)
	@git commit -m "$(files)"
    
git-push: $(files)
	@git push -u origin master
