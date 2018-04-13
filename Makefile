SRC_DIR = ./src
INC_DIR = ./inc
OBJ_DIR = ./obj
BIN_DIR = ./bin

SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
HEADERS = $(wildcard $(INC_DIR)/*.h)
 
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
PROGRAM = $(shell basename `pwd`)

CC := $(shell which g++)
CFLAGS = -Wall -W -O
LIBS = 
LDFLAGS = $(LIBS:%=-l%)
MKDIR = mkdir -p
 
$(PROGRAM) : $(OBJECTS)
	$(MKDIR) $(BIN_DIR)
	$(CC) $(LDFLAGS) -o $(BIN_DIR)/$@ $(OBJECTS)

$(OBJECTS): $(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(MKDIR) $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY : clean
clean :
	rm -rf $(BIN_DIR) $(OBJ_DIR)
