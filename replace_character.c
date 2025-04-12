#include <string.h>
void replace_character(char *str, char old_char, char new_char){
	int size = strlen(str);
	for(int i = 0; i < size; i++){
		if(str[i] == old_char){
			str[i] = new_char;
		}
	}
}
