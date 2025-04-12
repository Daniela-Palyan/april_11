#include <string.h>
int find_character(const char *str, char c){
	int size = strlen(str);
	for(int i = 0; i < size; i++){
		if(str[i] == c){
			return i;
		}
	}
	return -1;
}
