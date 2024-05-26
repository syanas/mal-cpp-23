CXX = g++
CXXFLAGS = -Wall -std=c++23 -O3

STEPSDIR = steps
BINDIR = bin
OBJDIR = obj

STEP_SRCS := $(wildcard $(STEPSDIR)/step*.cpp)
STEPS := $(STEP_SRCS:$(STEPSDIR)/%.cpp=%)

.PHONY: all clean

all: clean $(STEPS)

$(OBJDIR) $(BINDIR):
	@mkdir -p $@

$(STEPS): %: $(OBJDIR)/%.o | $(BINDIR)
	@echo "=> linking $@"
	$(CXX) $(CXXFLAGS) $^ -o $(BINDIR)/$@

$(OBJDIR)/%.o: $(STEPSDIR)/%.cpp | $(OBJDIR)
	@echo "=> compiling $@.cpp"
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(BINDIR)
