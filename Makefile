
run:
	@if [ -z "$(TARGET)" ]; then \
		echo "Usage: make run <program>"; \
		exit 1; \
	fi
	$(CXX) $(CXXFLAGS) $(SOURCE) $(UTILS) -o $(TARGET)
	./$(TARGET)

SOURCE := $(word 2, $(MAKECMDGOALS))
TARGET := bin/$(basename $(SOURCE))
UTILS := utils.cc
%:
	@: 
