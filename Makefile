CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

TARGET = cybergame
TEST_TARGET = runTests

SRC = main.cpp
TEST_SRC = tests/test_parseBoard.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

test: $(TEST_TARGET)
	./$(TEST_TARGET)

$(TEST_TARGET): $(TEST_SRC)
	$(CXX) $(CXXFLAGS) $(TEST_SRC) -o $(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET)
