#include <stdio.h>

#define AC 0
#define WA 1
#define ERROR -1

int spj(FILE *input, FILE *user_output);

void close_file(FILE *f) {
	if(f != NULL) {
		fclose(f);
	}
}

int main(int argc, char *args[]) {
	FILE *input = NULL, *user_output = NULL;
	int result;
	if(argc != 3) {
		printf("Usage: spj x.in x.out\n");
		return ERROR;
	}
	input = fopen(args[1], "r");
	user_output = fopen(args[2], "r");
	if(input == NULL || user_output == NULL) {
		printf("Failed to open output file\n");
		close_file(input);
		close_file(user_output);
		return ERROR;
	}

	result = spj(input, user_output);
	printf("result: %d\n", result);

	close_file(input);
	close_file(user_output);
	return result;
}

int spj(FILE *input, FILE *user_output) {
	int n;
	fscanf(input,"%d %d",&n);
	int a[110][110],sum[10010]={0},cnt=0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			fscanf(user_output,"%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			sum[cnt]+=a[i][j];
		}
		cnt++;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			sum[cnt]+=a[j][i];
		}
		cnt++;
	}
	for(int i=0;i<n;i++){
		sum[cnt]+=a[i][i];
	}
	cnt++;
	for(int i=0;i<n;i++){
		sum[cnt]+=a[n-1-i][i];
	}
	cnt++;
	int pre=sum[0];
	for(int i=1;i<cnt;i++){
		if(pre!=sum[i])
			return WA;
	}
	return AC;
}
