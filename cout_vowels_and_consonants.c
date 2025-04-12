#include <string.h>
void cout_vowels_and_consonants(const char *str, int *vowels, int *consonants){
	const char *vow = {"AEIOUWaeiouw\0"};
	const char *conson = {"BCDFGHJKLMNPQRSTVXYZbcdfghjklmnpqrstvxyz\0"};
	int size = strlen(str);
	*vowels = 0;
	*consonants = 0;

	for(int i = 0; i < size; i++){
		if(strchr(vow, str[i]) != NULL){
			(*vowels)++;
		}
		else if(strchr(conson, str[i]) != NULL){
                        (*consonants)++;
                }
	}
}

