#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char* argv[]){
    int ch;
    FILE *fp;
    unsigned long count = 0;
    if(argc != 2){
        printf("usage: %s filename\n",argv[0]);
        exit(1);
    }
    if((fp = fopen(argv[1],"r")) == NULL){
        printf("can't open %s\n",argv[1]);
        exit(1);
    }
    while((ch = getc(fp)) != EOF){
        putc(ch,stdout);
        count++;
    }
    fclose(fp);
    printf("file %s has %lu characters\n",argv[1],count);
    return 0;
}

int main(int argc,char* argv[]){
    int ch;
    const int len = 40;
    FILE *in,*out;
    char name[len];
    int count = 0;
    if(argc < 2){
        fprintf(stderr,"usage: %s filename\n",argv[0]);
        exit(1);
    }
    if((in = fopen(argv[1],"r")) == NULL){
        fprintf(stderr,"can't open %s\n",argv[1]);
        exit(1);
    }
    strncpy(name,argv[1],len-5);
    name[len-5] = '\0';
    strcat(name,".red");
    if((out = fopen(name,"w")) ==NULL){
        fprintf(stderr,"can't creat out file.\n");
        exit(3);
    }
    while((ch = getc(in)) != EOF){
        if(count++ & 3 == 0)
            putc(ch,out);
    }
    if(fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr,"enter in closing files\n");
    return 0;
}
