#include <stdio.h>
main()
{
  int year, color, name;
  printf("%s\n", "Enter a year");
  scanf("%i", &year);
  while (year<=0)
  {
    printf("%s\n", "Enter a year");
    scanf("%i", &year);
  }
  color=year%5;
  name=year%60;
  switch (color)
  {
    case 0:{printf("Red ");break;}
    case 1:{printf("Yellow ");break;}
    case 2:{printf("White ");break;}
    case 3:{printf("Black ");break;}
    case 4:{printf("Green ");break;}
  }
    if((name>=0 && name<4) || name==59){printf("pig\n");}
    else if(name>=4 && name<9){printf("rat\n");}
    else if(name>=9 && name<14){printf("cow\n");}
    else if(name>=14 && name<19){printf("tiger\n");}
    else if(name>=19 && name<24){printf("rabbit\n");}
    else if(name>=24 && name<29){printf("gragon\n");}
    else if(name>=29 && name<34){printf("snake\n");}
    else if(name>=34 && name<39){printf("horse\n");}
    else if(name>=39 && name<44){printf("sheep\n");}
    else if(name>=44 && name<49){printf("monkey\n");}
    else if(name>=49 && name<54){printf("rooster\n");}
    else if(name>=54 && name<59){printf("dog\n");}
}
