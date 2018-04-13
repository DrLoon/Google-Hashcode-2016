SRC_DIR = ./src
INC_DIR = ./inc
OBJ_DIR = ./obj

SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
HEADERS = $(wildcard $(INC_DIR)/*.h)
 
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
PROGRAM = hashcode-delivery
 
CC := $(shell which g++)
CFLAGS = -Wall -W -O
LIBS = 
LDFLAGS = $(LIBS:%=-l%)
MKDIR = mkdir -p
 
$(PROGRAM) : $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $(OBJECTS)

$(OBJECTS): $(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(MKDIR) $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY : clean
clean :
	rm -rf $(PROGRAM) $(OBJ_DIR)
