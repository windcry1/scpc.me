#include <stdio.h>
#include <string.h>

#define AC 0
#define WA 1
#define ERROR -1

int spj(FILE *input, FILE *user_output);

void close_file(FILE *f){
    if(f != NULL){
        fclose(f);
    }
}

int main(int argc, char *args[]){
    FILE *input = NULL, *user_output = NULL;
    int result;
    if(argc != 3){
        printf("Usage: spj x.in x.out\n");
        return ERROR;
    }
    input = fopen(args[1], "r");
    user_output = fopen(args[2], "r");
    if(input == NULL || user_output == NULL){
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

int spj(FILE *input, FILE *user_output){
	int n;
	fscanf(input,"%d",&n);
	int a[n+2],cnt[n+2];
	memset(cnt,0,sizeof(cnt));
	for(int i=0;i<n;i++){
		fscanf(user_output,"%d",&a[i]);
		if(a[i]>n||a[i]<1) return WA;
		cnt[a[i]]++;
	}
	for(int i=1;i<=n;i++)
		if(cnt[i]!=1) return WA;
	for(int i=0;i<n-2;i++)
		if((a[i]+a[i+1]+a[i+2])%2) return WA; 
	return AC;
}
