cc = gcc
files = main.c circleprogram.c circleprogram.h
bin = app

.PHONY = build run

all: build run

# compile the all
build: $(files)
	@$(cc) $(files) -o $(bin) -Wall

run: $(bin)
	@./$(bin)
    
clean:
	@rm $(bin)
	
git-am: $(files)
	@git add $(files)
	@git commit -m "$(files)"
    
git-push: $(files)
	@git push -u origin master
