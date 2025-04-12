int string_lenght(const char *str){
	int count = 0;
	while(*(str++)){
		count++;
	}
	return count;
}
