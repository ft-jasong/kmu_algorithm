CC = gcc
CFLAG = -Wall -Wextra -Werror

TARGET = exchangesort
OUTPUT = output.txt

SRC = exchangesort.c

all : $(TARGET)

$(TARGET): $(SRC)
	@$(CC) $(CFLAG) -o $@ $^
	@echo "Compile Complete"
	@./$@ > $(OUTPUT)
	@echo "Check output.txt file"

clean :
	@rm -f $(TARGET) $(OUTPUT)
	@echo "File deleted"

.PHONY: all clean
