#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define total_no_of_parties
#define party_no_1 "A"
#define party_no_2 "B" 
#define party_no_3 "C" 
#define party_no_4 "D"

int vote_Count1 = 0,
    vote_Count2 = 0,
    vote_Count3 = 0,
    vote_Count4 = 0,
    invalid_votes = 0;

void castVote(){


    int choice;
    printf("\n \n <#> <#> <#> <#> Please chooose your Candidate <#> <#> <#> <#> \n \n");
    printf("\n 1. %s", party_no_1);
    printf("\n 2. %s", party_no_2);
    printf("\n 3. %s", party_no_3);
    printf("\n 4. %s", party_no_4);
    printf("\n 5. %s", "None of the above");

    printf("\n \n Input your choice ( 1 - 4 ) : ");
    scanf("%d", &choice);

    switch (choice){
        case 1:
        vote_Count1++;
        break;
        case 2:
        vote_Count2++;
        break;
        case 3:
        vote_Count3++;
        break;
        case 4:
        vote_Count4++;
        break;
        case 5:
        invalid_votes++;
        break;
        default:
        printf(" \n Error: Wrong Chocie !! Please retry");

            getchar();
    }
    printf(" \n Thanks for your vote !!");

}

void votesCount(){
    printf("\n \n ##### Voting Statics #####");
    printf("\n %s - %d", party_no_1, vote_Count1);
    printf("\n %s - %d", party_no_2, vote_Count2);
    printf("\n %s - %d", party_no_3, vote_Count3);
    printf("\n %s - %d", party_no_4, vote_Count4);
    printf("\n %s - %d", "Spoiled Votes", invalid_votes);

}

void getLeadingCandiate(){
    printf("\n \n ##### Leading Candiate #####");
    if(vote_Count1 > vote_Count2 && vote_Count1 > vote_Count3 && vote_Count1 > vote_Count4){
        printf("The Leading Candiate is %s", party_no_1);
    }else if(vote_Count2 > vote_Count1 && vote_Count2 > vote_Count3 && vote_Count2 > vote_Count4){
        printf("The Leading Candiate is %s", party_no_2);
    }else if(vote_Count3 > vote_Count2 && vote_Count3 > vote_Count1 && vote_Count3 > vote_Count4){
        printf("The Leading Candiate is %s", party_no_3);
    }else if(vote_Count4 > vote_Count2 && vote_Count4> vote_Count3 && vote_Count4 > vote_Count1){
        printf("The Leading Candiate is %s", party_no_4);
    }else {
        printf("+++++++++++++ Warning!!!!!!!!! No Win-Win Situation ++++++++++++++");
    }
}

int main(){
	printf("\t\t\t###########################################################################");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t############                Voting Machine                     ############");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    
    char username[15];
    char password[12];


    printf("Enter your username:\n");
    scanf("%s",&username);

    printf("Enter your password:\n");
    scanf("%s",&password);

    if(strcmp(username,"group6")==0){
        if(strcmp(password,"123")==0)
		{

        printf("\nWelcome.Login Success!");
        
    int choice;
    do{
    
        printf("\n \n ###### WELCOME TO ELECTION / VOTING 2022 A.D ######");
        printf("\n \n 1. Cast the Vote.");
        printf("\n \n 2. Find the Vote Count.");
        printf("\n \n 3. Find the Leading Candidate.");
        printf("\n \n 0. Exit.");

        printf("\n \n Please Enter Your Choice : ");
        scanf("%d", &choice);

        switch(choice){
        case 1:
        castVote();
        break;
        case 2:
        votesCount();
        break;
        case 3:
        getLeadingCandiate();
        break;
        default:
        printf("\n Error: Invalid Choice !!!");
        }

    } while (choice!=0);
    
	}
	else{
    	printf("\nwrong password\n or username");
   	 	main();
		}
		
	}
    

getchar();
}
