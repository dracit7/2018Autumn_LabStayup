#include <stdio.h>
#include <unistd.h>

#define MAXBUFFER 20

struct node {
  int item;
  struct node* next;
};

void PrintInfo() {
  printf("2018.10.13 Saturday\n");
  printf("Welcome!\n");
  printf("Your username and passwd please :\n");
  printf("> ");
}

void alert() {
  sleep(1);
  printf("Alert!!! Alert!!!\n");
  sleep(1);
  printf("Somebody has hacked in!\n");
  printf("...\n");
  // FILE* infile = fopen("Data","r");
  // printf("br1\n");
  // char data = fgetc(infile);
  // fclose(infile);
  // printf("br2\n");
  // FILE* outfile = fopen("Data","w");
  // fputc((data+1)^0x05,outfile);
  // fclose(outfile);
  sleep(3);
  printf("* You've been kicked out from the system.\n");
  _exit(0);
}

void lag() {
  sleep(1);
}

int StrLen(char* a) {
  int length=0;
  while(1) {
    if (!a[length++]) break;
  }
  return length-1;
}

int StrCmp(char* a,char* b) {
  int length = StrLen(a);
  if (length != StrLen(b)) return 0;
  for (int i=0;i<=length;i++) {
    if (a[i]!=b[i]) return 0;
  }
  return 1;
}

int CheckIn() {
  char Username[MAXBUFFER];
  char Passwd[MAXBUFFER];
  scanf("%s",Username);
  printf("> ");
  scanf("%s",Passwd);
  if (!(StrCmp(Username,"Drac_zhang")&&StrCmp(Passwd,"ZLCtql"))) {
    return 0;
  }
  return 1;
}

int OpenFolder() {
  int array[5];
  scanf("%d %d %d %d %d",array,array+1,array+2,array+3,array+4);
  if (array[0]!=13) return 0;
  for (int i=1;i<5;i++) {
    if (array[i]!=(2*array[i-1]+1)) return 0;
  }
  return 1;
}

int CrackCode() {
  // s : 0x73 01110011 
  char rawcode;
  scanf("%c",&rawcode);
  char a = 5+(rawcode>>3);
  char b = (a&0x22)<<2;
  char c = (b^0x7f)|0x55;
  return c==0x77;
}

void Succeed() {
  printf("Receiving data ...\n\n");
  sleep(3);
  printf("Congratulations! You've got the report successfully!\n");
  sleep(1);
}

void Handle(const char* secret) {
  if (!StrCmp((char*)secret,"GetTouhou")) return;
  sleep(2);
  printf("\n* Hmm. Let's see what we found.\n");
  printf("* To get files in folder \"Touhou\", we have to input a number ...\n");
  printf("> ");
  int a;
  scanf("%d",&a);
  struct node Nodes[5];
  for (int i=0;i<4;i++) {
    Nodes[i].next = &Nodes[i+1];
  }
  Nodes[4].next = 0;
  int j=0;
  for (struct node* t=&Nodes[0];t!=0;t=t->next,j++) {
    t->item = j+a;
  }
  if (10!=Nodes[4].item) alert();
  sleep(2);
  printf("\nNow we've get it. You're the best!\n\n");
  _exit(0);
}