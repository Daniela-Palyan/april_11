#include <string.h>
void reverse_string(char *str){
	char temp;
	int size = strlen(str);
	for(int i = 0; i < size/2; i++){
		temp = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = temp;
	}
}
