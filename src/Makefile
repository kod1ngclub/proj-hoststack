# compiler
CC 		= 	clang

# target
TARGET	= hoststack

# compile & linker flags
CFLAG	= 	-Wall			\
			-Wextra			\
			-pedantic		\
			-Werror			\

LFLAG	= 	""

# entity
ENTITY_LAYER_H		= include/entity/layer/layer.h
ENTITY_GROUP_H		= include/entity/layer/group.h
ENTITY_ITEM_H		= include/entity/layer/item.h
ENTITY_PANEL_H		= include/entity/panel/panel.h
ENTITY_NOTE_H		= include/entity/panel/note.h
ENTITY_CONFIG_H		= include/entity/rule/config.h
ENTITY_ROLE_H		= include/entity/rule/role.h
ENTITY_USER_H		= include/entity/rule/user.h

# entity shared
ENTITY_BOOL_H		= include/entity/shared/bool.h
ENTITY_LIST_H		= include/entity/shared/list.h
ENTITY_PHONE_H		= include/entity/shared/phone.h

# usecase
USECASE_LAYER_H		= include/usecase/layer.h
USECASE_PANEL_H		= include/usecase/panel.h
USECASE_RULE_H		= include/usecase/rule.h

USECASE_LAYER_C 	= source/usecase/layer.c
USECASE_PANEL_C 	= source/usecase/panel.c
USECASE_RULE_C 		= source/usecase/rule.c

USECASE_LAYER_O 	= source/usecase/layer.o
USECASE_PANEL_O 	= source/usecase/panel.o
USECASE_RULE_O 		= source/usecase/rule.o

# usecase shared
USECASE_ERROR_H		= include/usecase/shared/error.h
USECASE_REF_H		= include/usecase/shared/ref.h

# main
MAIN_C				= main.c
MAIN_O				= main.o

# commands
TARGET:	$(MAIN_O) $(USECASE_LAYER_O)
	$(CC) $(LFLAG) $(MAIN_O) $(USECASE_LAYER_O)		-o $(TARGET)

MAIN_O: $(MAIN_C) $(USECASE_LAYER_H)
	$(CC) $(CFLAG) 		-c $(MAIN_C) -o $(MAIN_O)

USECASE_LAYER_O: $(USECASE_LAYER_C) $(USECASE_LAYER_H)
	$(CC) $(CFLAG) 		-c $(USECASE_LAYER_C) -o $(USECASE_LAYER_H)

clean:
	@echo "🧹 Start cleaning..."

	rm $(MAIN_O)
	rm $(TARGET)

	@echo "✅ Complete cleaning!"

echo:
	@echo "📘 Flags"
	@echo "CFLAG: $(CFLAG)"
	@echo "LFLAG: $(LFLAG)"

	@echo


