/*This software prompts the user to enter total number of published centers, 
5566total number of registered votes, total number of null and void votes, total 
number of valid votes and total valid votes for each candidate. Afterward, 
it determines the candidate with the majority of votes and displays the results on the screen.
NOTE:For a candidate to be a majority winner the candidate total valid votes should be greater than majority.
*/ 
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<signal.h>
#include<math.h>
int main(void)
{
system("color A");
printf("****************** MALAWI ELECTORAL COMMISSION ******************\n\n");
// Declare variables
long long int totalvalidvotesfor_candidateX,
totalvalidvotesfor_candidateY, 
totalvalidvotesfor_candidateZ, 
majority, 
totalvalidvotes,
totalregisteredvotes, 
totalvotescast, 
nullandvoid,
published_Centers, 
total_Centers;
int percent=100;
float majoritypercent;
FILE *fp;
/*Get total published centers */
printf("Enter Total Published Centers:");
scanf("%d", &published_Centers);
printf("Enter Total Centers:");
scanf("%d", &total_Centers);
// Get the total number of registered votes
printf("Enter Total Registered Votes:");
scanf("%d", &totalregisteredvotes);
// Get the total number of votes casted
printf("Enter Total Votes Cast:");
scanf("%d", &totalvotescast);
// Get total number of Null_&_Void votes
printf("Enter Total Null & Void Votes:");
scanf("%d", &nullandvoid);
// Get total votes
printf("Enter Total Valid Votes:");
scanf("%d", &totalvalidvotes); 
// Get total number of votes for candidate X
printf("Enter Total Valid Votes for Candidate X:");
scanf("%d", &totalvalidvotesfor_candidateX);
// Get total number of votes for candidate Y
printf("Enter Total Valid Votes for Candidate Y:");
scanf("%d", &totalvalidvotesfor_candidateY);
// Get total number of votes for  Candidate Z
printf("Enter Total Valid Votes for Candidate Z:");
scanf("%d", &totalvalidvotesfor_candidateZ);
//fifty plus one formular to determine the majority winne  majority=(totalvalidvotes/2)+1;
majority=(totalvalidvotes/2)+1;
// if Candidate X is greater than majority votes print Candidate X is a winner else if print Candidate Y is a winner else if print Candidate Z is the winner
if(totalvalidvotesfor_candidateX>majority){
printf("Cogratulations Candidate X your the winner of 2025 election\n\n");
} else if(totalvalidvotesfor_candidateY>majority){
printf("Congratulation candidate Y Your The Winner of 2025 Elections\n\n");
} else if(totalvalidvotesfor_candidateZ>majority){
printf("Cogratulations candidate Z your the winner of 2025 election\n\n");
} 
else 
{
printf("No majority winner was found RUNOF may be required Thank you.\n\n");
}
printf("________________ELECTION STATISTICS________________\n\n");
majoritypercent=totalvalidvotesfor_candidateX*percent/totalvalidvotes;
printf("%d*%d/%d Majority percent=%.8f\n\n",totalvalidvotesfor_candidateX, percent, totalvalidvotes,majoritypercent);
majoritypercent=totalvalidvotesfor_candidateY*percent/totalvalidvotes;
printf("%d*%d/%d Majority percent=%.8f\n\n",totalvalidvotesfor_candidateY, percent, totalvalidvotes,majoritypercent);
majoritypercent=totalvalidvotesfor_candidateZ*percent/totalvalidvotes;
printf("%d*%d/%d Majority percent=%.8f\n\n",totalvalidvotesfor_candidateZ, percent, totalvalidvotes,majoritypercent);
printf("*********************************************************************\n\n");

fp=fopen("Report.dat", "w");
if(fp==NULL){
printf("Erro opening file\n");
}
fprintf(fp, "How can i help you\n");
fprintf(fp ,"Hello Ian\n");
fclose(fp);

return 0;
}
