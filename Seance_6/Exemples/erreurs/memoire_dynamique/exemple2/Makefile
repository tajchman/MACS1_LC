all: codes1 codes2

codes1:  ex2a_valgrind  ex2b_valgrind  ex2c_valgrind  ex2d_valgrind
codes2: ex2a_sanitizer ex2b_sanitizer ex2c_sanitizer ex2d_sanitizer

%_valgrind: %.c
	gcc -g $^ -o $@

%_sanitizer: %.c
	gcc -g $^ -o $@ -fsanitize=address -static-libasan

clean:
	rm -f ex2a_valgrind  ex2b_valgrind  ex2c_valgrind  ex2d_valgrind ex2a_sanitizer ex2b_sanitizer ex2c_sanitizer ex2d_sanitizer
