.PHONY: clean All

All:
	@echo "----------Building project:[ Tactics - Debug ]----------"
	@cd "Tactics" && "$(MAKE)" -f  "Tactics.mk"
clean:
	@echo "----------Cleaning project:[ Tactics - Debug ]----------"
	@cd "Tactics" && "$(MAKE)" -f  "Tactics.mk" clean
