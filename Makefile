procbar:Main.c ProcBar.c 
	@gcc $^ -o $@

.PHONY:clean
clean:
	@rm procbar

