CC = gcc
file = helloworld.c
bin = app

.PHONY = build run

all: build run

build: $(file)
	@$(CC) $< -o $(bin) -Wall

run: $(bin)
	@./$(bin)
    
clean: $(bin)
	@rm $(bin)
	
git-am: $(files)
	@git add $(files)
	@git commit -m "$(files)"

git-am-.:
	@git add .
	@read -p "enter commit message: " m;
	@git commit -m "$(files) - " $$m
    
git-push: $(files)
	@git push -u origin master
