CC =gcc
CFLAGS = -Wall -Werror -Wextra -c
SOURCES = s21_string_test.c s21_string.c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = main

all: $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXECUTABLE)

rebuild: all

.o: .c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm $(OBJECTS)
	rm $(EXECUTABLE)
