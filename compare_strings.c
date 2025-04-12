int compare_strings(const char * str1, const char *str2){
	int res = 0;
	while(*str1 == *str2 && *str1 && *str2){
		++str1;
		++str2;
	}
	if(*str1 > *str2)
		res = 1;
	else if(*str1 < *str2)
		res = -1;
	return res;
}
		
