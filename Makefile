.PHONY: clean All

All:
	@echo "----------Building project:[ 55-Working-with-cpp_strings - Debug ]----------"
	@cd "55-Working-with-cpp_strings" && "$(MAKE)" -f  "55-Working-with-cpp_strings.mk"
clean:
	@echo "----------Cleaning project:[ 55-Working-with-cpp_strings - Debug ]----------"
	@cd "55-Working-with-cpp_strings" && "$(MAKE)" -f  "55-Working-with-cpp_strings.mk" clean
