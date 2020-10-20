CC=gcc
WIN32_CC=x86_64-w64-mingw32-gcc-win32
FILES=engine/main.c engine/window.c engine/shader.c
LIBS=-lGL -lglfw -lGLEW

linux: $(FILES)
	$(CC) $(FILES) $(LIBS) -o game_engine -Wall

debug_linux: $(FILES)
	$(CC) $(FILES) $(LIBS) -o game_engine -Wall -g

windows: $(FILES)
	$(WIN32_CC) $(FILES) $(LIBS) -o game_engine -Wall