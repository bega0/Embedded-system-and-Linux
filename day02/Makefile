
CC = gcc
CFLAGS = -Wall -Wextra -g -Iinclude

OBJS = src/main.o src/sensor.o
TARGET = sensor_demo

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

src/%.o: src/%.c include/sensor.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
