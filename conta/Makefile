CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = banco

SRC = main.cpp \
      Pessoa.cpp \
      Cliente.cpp \
      Funcionario.cpp \
      Banco.cpp \
      ContaCorrente.cpp \
      ContaPoupanca.cpp

OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

rebuild: clean all
