.PHONY: STRLEN STRCMP STRCPY STRCAT

CC =gcc
CFLAGS = -Wall -Werror -Wextra -c
SOURCES = s21_string_test.c s21_string.c
OBJECTS = $(SOURCES:.c=.o)
OBJ = s21_string_test.c s21_string.c
EXECUTABLE = main
QUESTS = Quest1 Quest2 Quest3 Quest4 Quest5 Quest6

all: $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXECUTABLE)

rebuild: clean all

strlen_tests: STRLEN
	$(CC) $(OBJECTS) -o Quest1

strcmp_tests: STRCMP
	$(CC) $(OBJECTS) -o Quest2

strcpy_tests: STRCPY
	$(CC) $(OBJECTS) -o Quest3

strcat_tests: STRCAT
	$(CC) $(OBJECTS) -o Quest4

s21_strchr_test: STRCHR
	$(CC) $(OBJECTS) -o Quest5

STRLEN:
	$(CC) -DSTRLEN $(CFLAGS) -c s21_string_test.c -o s21_string_test.o
	$(CC) -DSTRLEN $(CFLAGS) -c s21_string.c -o s21_string.o

STRCMP:
	$(CC) -DSTRCMP $(CFLAGS) -c s21_string_test.c -o s21_string_test.o
	$(CC) -DSTRCMP $(CFLAGS) -c s21_string.c -o s21_string.o

STRCPY:
	$(CC) -DSTRCPY $(CFLAGS) -c s21_string_test.c -o s21_string_test.o
	$(CC) -DSTRCPY $(CFLAGS) -c s21_string.c -o s21_string.o

STRCAT:
	$(CC) -DSTRCAT $(CFLAGS) -c s21_string_test.c -o s21_string_test.o
	$(CC) -DSTRCAT $(CFLAGS) -c s21_string.c -o s21_string.o

STRCHR:
	$(CC) -DSTRCHR $(CFLAGS) -c s21_string_test.c -o s21_string_test.o
	$(CC) -DSTRCHR $(CFLAGS) -c s21_string.c -o s21_string.o

.o: .c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	-rm $(OBJECTS)
	-rm $(EXECUTABLE)
	-rm $(QUESTS)
