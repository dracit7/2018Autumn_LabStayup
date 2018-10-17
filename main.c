#include "library.h"

int main(int argc, char const *argv[])
{
  // * Take care of your arguments.
  if (argc>1) Handle(argv[1]);

  // * Now let's begin.
  PrintInfo();

  // * The first step is to hack into his system.
  if(!CheckIn()) {
    printf("Oops. It seems that you're not the user of this system.\n");
    alert();
  }
  printf("Starting your system ...\n");
  printf("System started.\n\n");
  // * Good job.

  lag();
  printf("Copying files from the system...\n\n");
  lag();
  printf("Password for folder \"/tmp/file/华中可稽大学\" :\n");

  // * It seems that he is not a fool.
  printf("* Oh crap. He has cyphered that folder.\n");
  printf("* You have to input some numbers this time.\n");
  printf("> ");
  if(!OpenFolder()) {
    printf("Wrong input.\n");
    printf("* Not good. The system has noticed you.\n");
    alert();
  }
  getchar();
  lag();
  printf("ID authenticated.\n\n");
  lag();
  // * Well done!

  // * Wait, over here...
  printf("Password for folder \"/tmp/file/华中可稽大学/马++实验报告\" :\n");
  printf("* That's just what we want.\n");
  printf("* Take care. This time the input is different...\n");
  printf("> ");
  if(!CrackCode()) {
    printf("Wrong input.\n");
    printf("* Not good. The system has noticed you.\n");
    alert();
  }
  lag();
  printf("ID authenticated.\n\n");
  // Now we've get it.

  // You may be interested in the secret mission ...
  Succeed();
  printf("Wait, here's another folder called Touhou...\n\n");
  lag();

  return 0;
}
