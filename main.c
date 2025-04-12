#include <stdio.h>
#include "string_lenght.c"
#include "reverse_string.c"
#include "compare_strings.c"
#include "cout_vowels_and_consonants.c"
#include "find_character.c"
#include "replace_character.c"
int main(){
	//Task1
	printf("Task1\n");
	fflush(stdout);
	char* str = "Hello world";
	printf("There is %d symbols in \"%s\"\n", string_lenght(str), str);
	fflush(stdout);

	//Task2
	char str2[] = {"Pink Floyd\0"};
	printf("\nTask2\n");
	fflush(stdout);
	printf("Reverse version of \"%s\" is ", str2);
	fflush(stdout);
	reverse_string(str2);
	printf("\"%s\"\n", str2);
	fflush(stdout);

	//Task3
	char* str3_1 = "Hello world";
	char* str3_2 = "Hello earth";
	printf("\nTask3\n");
	fflush(stdout);
	printf("strcmp(\"Hello world\", \"Hello earth\") = %d\n", compare_strings(str3_1, str3_2));
	fflush(stdout);
	
	//Task4
	int vowels = 0, consonants = 0;
	int *vow = &vowels, *con = &consonants;
	const char *str4 = "Goodbye cruel world";
	printf("\nTask4\n");
	fflush(stdout);
	cout_vowels_and_consonants(str4, vow, con);
	printf("There is %d vowels and %d consonants in \"%s\"\n", vowels, consonants, str4);
	fflush(stdout);

	//Task5
	const char *str5 = "Hey you";
	char c = 'y';
	printf("\nTask5\n");
	fflush(stdout);
	printf("The index of first \'%c\' in \"%s\" is %d\n", c, str5, find_character(str5, c));
	fflush(stdout);

	//Task6
	char str6[] = {"Is there anybody out there?\0"};
	char old_char = 'e';
	char new_char = 'F';
	printf("\nTask6\n");
	fflush(stdout);
	printf("After changing letter \'%c\' on \'%c\', \"%s\" became ", old_char, new_char, str6);
	fflush(stdout);
	replace_character(str6, old_char, new_char);
	printf("\"%s\"\n", str6);
	fflush(stdout);
	return 0;
}
