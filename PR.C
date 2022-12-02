#include<stdio.h>
#include<conio.h>
main()
{
    char a;
    clrscr();
    printf("Enter M for Monday\n");
    printf("Enter T for Tuesday\n");
    printf("Enter W for Wednesday\n");
    printf("Enter t for Tharseday\n");
    printf("Enter F for Friday\n");
    printf("Enter S for Saturday\n");
    printf("Enter s for Sunday\n");
    scanf("%c",&a);

     switch(a) {
      case 'M':
	      printf("Monday");
	      break;
      case 'T':
	      printf("Tuesday");
	      break;
      case 'W':
	      printf("Wednesday");
	      break;
      case 't':
	      printf("Tharseday");
	      break;
      case 'F':
	      printf("Friday");
	      break;
      case 'S':
	      printf("saturday");
	      break;
      case 's':
	      printf("Sunday");
	      break;
      default :printf("invalid");
      }

      getch();
}













