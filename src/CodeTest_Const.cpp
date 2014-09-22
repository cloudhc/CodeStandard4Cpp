#include "CodeTest_Const.h"

#include <stdio.h>
#include <ostream>

#define MAX_BUFFER_SIZE	128

namespace A2Tec_Tztv_Const {

static int _fgets(char* buffer, const char* filename)
{
	FILE *fp = fopen(filename, "r");

	if(!fp) {
		printf("file not found.");
		return 0;
	}

	if(!fgets(buffer, MAX_BUFFER_SIZE, fp)) {
		fclose(fp);
		return 0;
	}

	fclose(fp);
	return 1;
}

int testCode()
{
	char buffer[MAX_BUFFER_SIZE+1] = {0, };

	if(!_fgets(buffer, "data.txt")) {
		return 0;
	}

//	std::cout << buffer << std::endl;
	printf("%s\n", buffer);

	return 1;
}

}
