CC = g++
CFLAGS = -O2
SRC = ./src/*.c*
BIN = calculator
BUILD_DIR = ./build/
ASSETS_DIR = ./assets/

$(BIN):
	mkdir -p "$(BUILD_DIR)"
	$(CC) $(CFLAGS) $(SRC) -o "$(BUILD_DIR)$(BIN)"
	cp -r $(ASSETS_DIR)* "$(BUILD_DIR)"

clean:
	rm -rf "$(BUILD_DIR)"

.PHONY: clean
