
#include <stdio.h>
#include <math.h>

int healthPoint(int dice, int level, int constitution);
int main() {

int n = 0;
int lvl = 0;
int con;
int dice;


  puts("WELCOME TO DND HP CALCULATOR");
  puts("");

  puts("Doungeon and dragons classes:"); 
  puts("1) Artificier");
  puts("2) Barbarian");
  puts("3) Bard");
  puts("4) Bloodhunter");
  puts("5) Cleric");
  puts("6) Druid");
  puts("7) Fighter");
  puts("8) Monk");
  puts("9) Paladin");
  puts("10) Ranger");
  puts("11) Rogue");
  puts("12) Sorcerer");
  puts("13) Warlock");
  puts("14) Weezard");

  puts("");
  puts("");
  do{
  printf("Select your class by typing the corresponding number: ");
  scanf("%d", &n);
  if(n <1 || n > 14) puts("Worng number");
  }
  while(n <1 || n > 14);
  
  while(lvl <=0)
  {
  printf("Type your character's level: ");
  scanf("%d", &lvl);
  if(lvl <= 0) printf("in DnD minimum level is 1: retry\n");
  }
  
  printf("Typer your character's constitution modifier ");
  scanf("%d", &con);
  puts("");
  

  switch(n){
    case 12:
    case 14: 
    dice = 6;
    printf("Your character has %d hp\n", healthPoint(dice, lvl, con));
    break;
   
    case 1: 
    case 3:
    case 5:
    case 6:
    case 8:
    case 11:
    case 13:
    dice = 8;
    printf("Your character has %d hp\n", healthPoint(dice, lvl, con));
    break;

    case 4:
    case 7:
    case 9:
    case 10:
    dice = 10;
    printf("Your character has %d hp\n", healthPoint(dice, lvl, con));
    break;
   
    case 2:
    dice = 12;
    printf("Your character has %d hp\n", healthPoint(dice, lvl, con));
    break;

 
    
  }
  


  

    return 0;
}
int healthPoint(int dice, int level, int constitution){

  int mean = 0;
  int sum = 0;
  for(int i = 1; i <= dice; i++){
    sum += i;
    mean = ceil((float)sum / dice);
  }
  int hp = 0;
  hp = (dice + constitution) + (mean + constitution) * (level - 1) ;
  return hp;
}