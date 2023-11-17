CXX = g++
version = -std=c++17

MODEL_PATH = ./Model/
SRC_MODEL = $(wildcard $(MODEL_PATH)*.cc)
HEADER_MODEL =  $(wildcard $(MODEL_PATH)*.h)
CONTROLLER_PATH = ./Controller/
SRC_CONTROLLER = $(wildcard $(CONTROLLER_PATH)*.cc)
HEADER_CONTROLLER = $(wildcard $(CONTROLLER_PATH)*.h)
TESTS_PATH = ./Test/
SRC_TEST = $(wildcard $(TESTS_PATH)*.cc)
HEADER_TEST = $(wildcard $(TESTS_PATH)*.h)
VIEW_PATH = ./View/
SRC_VIEW = $(wildcard $(VIEW_PATH)*.cc)
HEADER_VIEW = $(wildcard $(VIEW_PATH)*.h)
TARGET = tests
CXXFLAGS = -Wall -Wextra -Werror -Wpedantic -g
SANITIZE = -fsanitize=address
UNAME := $(shell uname)
OPTIMIZATIONFLAGS := -O3


ifeq ($(UNAME), Linux)
 TEST_FLAGS +=  -lgtest -pthread -lm
else
 TEST_FLAGS += -lgtest -lm
endif

all: uninstall clean $(TARGET) install dvi dist

$(TARGET) : clean build_temp_test
	$(CXX) $(version) $(CXXFLAGS) $(SRC_TEST) $(SRC_MODEL) $(SRC_CONTROLLER)  $(TEST_FLAGS) -o $(TARGET) $(OPTIMIZATIONFLAGS)
	./$(TARGET)


install:
	rm -rf View/MLP/Build_MLP
	mkdir View/MLP/Build_MLP
	cd View/MLP/Build_MLP && cmake ../
	cd View/MLP/Build_MLP && make
	open View/MLP/Build_MLP/MLP.app/

uninstall:
	rm -rf View/MLP/Build_MLP View/MLP/build  View/MLP/QCustomPlot-library

dist: install
	tar --totals -cvf Maze.tar View Test Model Controller

dvi:
	Doxygen Doxyfile
	open ./Documentation/html/index.html
build_temp_test:
	mkdir Temp

style: 
	clang-format -i $(SRC_MODEL) $(SRC_CONTROLLER) $(SRC_TEST) $(SRC_VIEW) $(HEADER_MODEL) $(HEADER_CONTROLLER) $(HEADER_TEST) $(HEADER_VIEW)
clean :
	rm -rf View/MLP/Build_MLP $(TARGET) *.a *.out *.tar Temp
	# rm -rf Documentation
	# rm -rf $(SRC_MODEL_PATH)/*.dSYM $(TESTS)/*.dSYM 
	find . -type f -name '*.dSYM' -print -delete
