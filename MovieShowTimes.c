#include<stdio.h>
void login();
void displayMovieShowTimes();
int main(){
 int choice;
 printf("\n----------------Welcome to Movie ShowTimes Viewer(Only Admin Login)-----------");
 printf("\n Please type in the choice accordingly");
 printf("\n 1. Login");
 printf("\n 2. Exit");
 printf("\nEnter the choice:");
 scanf("%d",&choice);
 switch(choice){
  case 1:
    login();
  break;
  case 2: 
   exit(0);
  break;
 }
 return 0;
} 
void login(){
   int verify=0;
   char username[5];
   char password[5];
   printf("\nEnter the username:");
   scanf("%s",username);
   printf("\nEnter the password:");
   scanf("%s",password);
   if(strcmp(username,"root")==0){
      if(strcmp(password,"root")==0){
         verify = 1;
      }
      else {
         printf("\nIncorrect credentials\n");
      }

  } else {
     printf("\n Incorrect credentials\n");
  }
  if(verify) {
     int choice;
     printf("\nLogin Successful!!!!\n\n");
     printf("\n 1. Display Movie Times:");
     printf("\n 2. Exit:");
     printf("\nEnter the choice:");
     scanf("%d",&choice);
     switch(choice){
      case 1:
       displayMovieShowTimes();
      break;
      case 2:
        exit(0);
      break;
      }
  }    
}
//This method displays the availble shows in the theatres
void displayMovieShowTimes(){
   char movieTimes[5][50] = {
      "Avengers- 12:00PM",
      "SpiderMan Homecoming- 1:30PM",
      "Black Panther- 3:30PM",
      "Wonder- 6:00PM",
      "Kunfu Panda 3- 7:00PM",
   };
   int len = (int)(sizeof(movieTimes)/(sizeof(movieTimes)[0]));
   int i;
   printf("\n----------Displaying Show Times----------");
   for(i=0;i<len;i++){
      printf("\n%d. %s",i+1,movieTimes[i]);
   }
   printf("\n\n\n");
}

