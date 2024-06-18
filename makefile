# Makefile

# Variables
CXX = g++
SRC_DIR = src
INCLUDE_DIR = include
LIBS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
OUTPUT = game.exe
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

# Regla principal
all: $(OUTPUT)

# Regla para compilar
%.o: %.cpp
    $(CXX) -c $< -I$(INCLUDE_DIR) -o $@

$(OUTPUT): $(OBJECTS)
    $(CXX) $(OBJECTS) $(LIBS) -o $(OUTPUT)

# Regla para ejecutar
run: $(OUTPUT)
    ./$(OUTPUT)

# Regla para limpiar
clean:
    rm -f $(SRC_DIR)/*.o $(OUTPUT)