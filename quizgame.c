
#include <stdio.h>
#include <ctype.h>

int main() 
{
     printf("\t\t\t\t  WELCOME ");
    printf("\t  TO ");
    printf("\t\t   The Game ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t            Quiz Game    ") ;
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\n\"GAME RULES\"");
    printf("\nFOR EACH CORRECT ANSWER +1MARK ");
    //introduce option
    char option;
    char easy_questions[][100] =
    {
      "1. What is the brain of the computer ?",
      "2. What nut is used to make marzipan?",
      "3. What element does 'O' represent on the periodic table?"
    };
    char easy_options[][100] = 
    {
        "\n 1. CPU \n 2. Mother board \n 3. Monitor",
        "\n 1.Almond \n 2. Walnut \n 3.Peanuts \n 4.Pecans",
        "\n 1.Osmium \n 2. Oxygen \n 3.Oganesson "
    };
    char easy_answers[3] = {'1','1','2'};
    // calculate number of questions that we have

     char medium_questions[][100] =
     {
      "1. Who is the prime minister if India?",
      "2. Who is the cheif minister of Andhra pradesh?",
      "3. What is the captial of india?"
    };
    char medium_options[][100] = 
    {
        " \n 1.Narendra Modi \n 2.Chandra shekar \n 3. Vajpayee",
        " \n 1. Chandra shekar \n 2. Jagan mohan \n 3. chandra babu naidu",
        " \n 1. New delhi \n 2. Mumbai \n 3. Kolkata"
    };
    char medium_answers[3] = {'1','2','1'};
    // calculate number of questions that we have

     char hard_questions[][100] =
     {
      "1. What country has the highest life expectancy?.",
      "2. Where would you be if you were standing on the Spanish Steps?",
      "3. Which language has the more native speakers: English or Spanish?"
    };
    char hard_options[][100] = 
    {
        "\n1.USA \n 2.Hong Kong \n 3.Japan",
        "\n1. Rome \n 2.Japan \n 3.South Africa",
        "\n1. English \n 2.Spanish"
    };
    char hard_answers[3] = {'2','1','2'};
    // calculate number of questions that we have
  int numberOfQuestions = sizeof(easy_questions)/sizeof(easy_questions[0]);
    // store guess
    
    char guess;
    // track score
    int score=0, grade;


    printf("\n Select a Difficulty Level.\nType the number to select the level.\n ");
    //select options
    printf("1. Easy\n ");
    printf("2. Medium\n ");
    printf("3. Hard\n");
    printf(">  ");
    
    //get choice from user
    option=getchar();
    
    switch(option)
    {
      case '1':
        printf("Easy Mode Selected \n");
        for(int i=0; i < numberOfQuestions; i++)
        {
          printf("%s ", easy_questions[i]);
          printf("%s ", easy_options[i]);
          printf("\nAnswer: ");
          scanf(" %s", &guess);
          while ((getchar()) != '\n'); // clear \n from input buffer

          //check if answer is correct
          if (guess==easy_answers[i])
          {
            printf("Correct! \n");
            score++;
          } else {
            printf("Wrong \n");
          }
        };

        //display user score
        printf("Test Complete \nYou Scored %d/%d \n", score, numberOfQuestions);
      break;

      case '2':
        printf("Medium Mode Selected \n");
         for(int i=0; i < numberOfQuestions; i++)
         {
          printf("%s ", medium_questions[i]);
          printf("%s ", medium_options[i]);
          printf("\nAnswer: ");
          scanf(" %s", &guess);
          while ((getchar()) != '\n'); // clear \n from input buffer

          //check if answer is correct
          if (guess==medium_answers[i])
          {
            printf("Correct! \n");
            score++;
          } else {
            printf("Wrong \n");
          }
        };
        
         //display user score
        printf("Test Complete \nYou Scored %d/%d \n", score, numberOfQuestions);
      break;

      case '3':
        printf("Hard Mode Selected \n");
         for(int i=0; i < numberOfQuestions; i++)
         {
          printf("%s ", hard_questions[i]);
          printf("%s ", hard_options[i]);
          printf("\nAnswer: ");
          scanf(" %s", &guess);
          while ((getchar()) != '\n'); // clear \n from input buffer

          //check if answer is correct
          if (guess==hard_answers[i])
          {
            printf("Correct! \n");
            score++;
          } else {
            printf("Wrong \n");
          }
        };
        
         //display user score
        printf("Test Complete \nYou Scored %d/%d \n", score, numberOfQuestions);
      break;

      default:
       printf("Your Selection is Incorrect \n");

      break;
    }

    return 0;
}
