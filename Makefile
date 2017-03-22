INC_DIR:= ./inc/ ./inc/net/ ./inc/threadpool/
SRC_DIR:= ./src ./src/net ./src/threadpool
SRCS:=$(wildcard ./src/*.cc) $(wildcard ./src/net/*.cc) $(wildcard ./src/net/*.c) $(wildcard ./src/threadpool/*.cc)
OBJS:= $(patsubst %.cc, %.o, $(SRCS))
LIBS:= -lpthread

CXX:=g++

CXXFLAGS:= -w -g -std=c++11 $(addprefix -I, $(INC_DIR)) $(LIBS) -Wno-deprecated

EXE:=./bin/main

$(EXE):$(OBJS)
	$(CXX) -o $(EXE) $(SRCS) $(CXXFLAGS)
#$(SRC_DIR)/%.o:$(SRC_DIR)/%.cc
	#$(CXX)  -c $^ -o $@ $(CXXFLAGS)

clean:
	rm -rf $(EXE)
	rm -rf $(OBJS)
