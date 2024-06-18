# Makefile

# Variables
CXX = g++
SRC_DIR = src
INCLUDE_DIR = include
LIBS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
OUTPUT = game.exe
SOURCES = $(SRC_DIR)/Ball.cpp $(SRC_DIR)/Barrier.cpp $(SRC_DIR)/Brick.cpp $(SRC_DIR)/Brinck_Braker.cpp $(SRC_DIR)/GraphicsRunner.cpp $(SRC_DIR)/Paddle.cpp $(SRC_DIR)/StageBuilder.cpp $(SRC_DIR)/Musica.cpp

# Regla principal
all: $(OUTPUT)

# Regla para compilar
$(OUTPUT): $(SOURCES)
	$(CXX) $(SOURCES) -I$(INCLUDE_DIR) $(LIBS) -o $(OUTPUT)

# Regla para ejecutar
run: $(OUTPUT)
	./$(OUTPUT)

# Regla para limpiar
clean:
	rm -f $(OUTPUT)

# Regla phony
.PHONY: all run clean
