
all:
	cc -O2 -c mymath.c
	ar rcs libmymath.a mymath.o
	ghc -O2 -L. -lmymath myapp

clean:
	rm -f *.a *.o *.hi myapp

