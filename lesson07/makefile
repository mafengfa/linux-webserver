# 变量
# src = add.o mul.o main.o
src = $(wildcard ./*.c)
target = app


$(target) : $(patsubst %.c,%.o,$(src)) 
	gcc $(patsubst %.c,%.o,$(src)) -o $(target)

%.o : %.c
	gcc -c $< -o $@

.phone:clear

clear:
	rm *.o -f