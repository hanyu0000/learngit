#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TITE 40
#define AUTL 40
#define BKS 80
#define SLEN 81
char* s_gets(char* st,int n);
struct book {
    char title[TITE];
    char author[AUTL];
    float value;
};
int main(){
    struct book library[BKS];
    int count = 0;
    puts("enter the title");
    while(count < BKS && s_gets(library[count].title,TITE) != NULL && library[count].title[0] != '\0'){
        puts("enter the author");
        s_gets(library[count].author,AUTL);
        puts("enter the value");
        scanf("%f",&library[count++].value);
        while(getchar() != '\n')
            continue;
        if(count < BKS)
            puts("enter the next title");
    }
    if(count > 0){
        puts("here is your books");
        for(int i = 0;i<count;i++)
            printf("%sby%s:$%.2f\n",library[i].title,library[i].author,library[i].value);
    }
    else
        puts("no books ?");
    return 0;
}
char* s_gets(char* st,int n){
    char* ret;
    char* find;
    ret = fgets(st,n,stdin);
    if(ret){
        find = strchr(st,'\n');
        if(find)
            *find = '\0';  
        else
            while(getchar() != '\n')
                continue;
    }
    return ret;
}

struct namect{
    char* fname;
    char* lname;
    int letters;
};
void get(struct namect *);
void make(struct namect *);
void show(struct namect *);
void cleanup(struct namect *);
/*int main(){
    struct namect person;
    get(&person);
    make(&person);
    show(&person);
    cleanup(&person);
    return 0;
}*/
void get(struct namect * pst){
    char ch[SLEN];
    puts("enter your first name");
    s_gets(ch,SLEN);
    pst->fname = (char*)malloc(strlen(ch)+1);
    strcpy(pst->fname,ch);
    puts("enter your last name");
    s_gets(ch,SLEN);
    pst->lname = (char*)malloc(strlen(ch)+1);
    strcpy(pst->lname,ch);
}
void make(struct namect * pst){
    pst->letters = strlen(pst->fname)+strlen(pst->lname);
}
void show(struct namect * pst){
    printf("%s %s ,your name contain %d letters\n",pst->fname,pst->lname,pst->letters);
}
void cleanup(struct namect * pst){
    free(pst->fname);
    free(pst->lname);
}
