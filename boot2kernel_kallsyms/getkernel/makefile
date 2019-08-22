# Makefile

# sudo apt install libz-dev liblz4-dev libbz2-dev
# sudo apt install -y liblzma-dev
# cc -g -Wall --static -c -o compress.o compress.c
# cc -g -Wall --static -o bootimg.o bootimg.c compress.c


SRC = main.c compress.c bootimg.c utils.c format.c

LLB = -lz -lbz2 -llz4 -llzma -lpthread


getkernel:
	cc -g -Wall -static -o getkernel $(SRC) $(LLB)

clean:
	rm getkernel