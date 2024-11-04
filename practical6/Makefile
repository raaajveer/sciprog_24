# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c99

# Target executable
TARGET = matrix_multiplication

# Object files
OBJS = main.o matmult.o

# Default target
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compile amain.c to object file
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

# Compile matmult.c to object file
matmult.o: matmult.c
	$(CC) $(CFLAGS) -c matmult.c

# Clean up object files and the executable
clean:
	rm -f $(OBJS) $(TARGET)
