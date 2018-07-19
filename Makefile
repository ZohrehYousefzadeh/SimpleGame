all: main

# COMPILER
CC = g++

# COMPILER FLAGS
CFLAGS = -std=c++11

# INCLUDE FILES DIRECTORY
INCLUDE_DIR = ./include

main: main.o GameManager.o InputManager.o RandomGenerator.o
	$(CC) -o $@ -I$(INCLUDE_DIR) $(CFLAGS) main.o GameManager.o InputManager.o RandomGenerator.o
  
main.o: ./Source/main.cpp GameManager.o InputManager.o RandomGenerator.o
	$(CC) -c $< -I$(INCLUDE_DIR) $(CFLAGS) ./Source/main.cpp
  
GameManager.o: ./Source/GameManager.cpp InputManager.o RandomGenerator.o
	$(CC) -c $< -I$(INCLUDE_DIR) $(CFLAGS) ./Source/GameManager.cpp

InputManager.o: ./Source/InputManager.cpp
	$(CC) -c $< -I$(INCLUDE_DIR) $(CFLAGS) ./Source/InputManager.cpp

RandomGenerator.o: ./Source/RandomGenerator.cpp
	$(CC) -c $< -I$(INCLUDE_DIR) $(CFLAGS) ./Source/RandomGenerator.cpp

clean:
	-rm main.o GameManager.o InputManager.o RandomGenerator.o
