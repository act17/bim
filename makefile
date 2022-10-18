bim: main.c game/rules.c game/game.c
	gcc -o $@ $^ -Werror -Wall
clean:
	rm bim
