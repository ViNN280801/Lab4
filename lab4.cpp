#include<clocale>
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cmath>
//#include<limits>

int main(){
	int choose = 0, task = 0, temp = 0, i = 0, n = 0;
	double sum = 0; /*inf = std::numeric_limits<double>::infinity()*/

	switch_operator:

	printf("Choose task: ");
	scanf("%d", &task);

	switch(task){
	case 1:
		printf("Task 1:\n\n");
		start:
		printf("Welcome to mini-game! Enter 1 to continue: ");
		scanf("%d", &choose);
		if(choose == 1){
			printf("1st question: ln(e)=? Enter your answer: ");
			scanf("%d", &choose);
			if(choose == 1){
				printf("Correct! Next question: sin(0)=? Enter your answer: ");
				scanf("%d", &choose);
				if(choose == 0){
					printf("Nice! Next question: Capital of Scotland:\n1.Glasgow\n2.Edinburgh\n3.Cardiff\nEnter your answer: ");
					scanf("%d", &choose);
					if(choose == 2) printf("Awesome! You win!\n");
					else{
						printf("You answered wrong! Are you ready to start over? Yes(0) No(1): ");
						scanf("%d", &choose);
						if(choose == 0) goto start;
						else printf("Goodbye!\n");
					}
				}
				else{
					printf("You answered wrong! Are you ready to start over? Yes(0) No(1): ");
					scanf("%d", &choose);
					if(choose == 0) goto start;
					else printf("Goodbye!\n");
			}
		}
		}
		else printf("You lose :(\n");
	break;
	case 2:
		printf("Task 2: \n\nEnter number: ");
		scanf("%d", &choose);

		choose == 123 ? printf("You founded smth special :O\n") : printf("You entered %d\nAdress: %X\n", choose, &choose);
	break;
	case 3:
		printf("Task 3 (Switch operator):\n");
		goto switch_operator;
	break;
	case 4:
		printf("Task 4.1:\nWHILE:\n\nEnter a positive number: ");
		scanf("%d", &choose);

		choose = abs(choose);
		while(choose >= 0){
			printf("Welcome to infinity loop. Stop! It isn't infinity!!!\t");
			choose--;
		}

		printf("\n\n**********\n\nDo you want to clear terminal? Yes(1) No(0): ");
		scanf("%d", &choose);

		if(choose == 1) system("clear");
		else if (choose == 0) {
			printf("Ok, do you want to go to the start? Yes(1) No(0): ");
			scanf("%d", &choose);

			switch(choose){
			case 1:
				goto switch_operator;
			break;
			case 2:
				printf("Goodbye!\n");
			break;
			}
		}
	break;
	case 5:
		printf("Task 4.2: FOR:\n\nEnter a number: ");
		scanf("%d", &choose);

		choose = abs(choose);
		temp = choose;

		for(choose; choose >= 0; --choose){
			if((choose % 2) == 0) continue;
			printf("%d\n", choose);
		}

		printf("Result by WHILE loop:\n");

		while(temp >= 0){
			temp--;

			if((temp % 2) != 0) continue;
			printf("%d\n", temp);
		}
	break;
	case 6:
		printf("Task 4.2:\nFOR(Sum of the series):\n\nEnter the lower border: ");
		scanf("%d", &i);
		printf("Enter the higher border: ");
		scanf("%d", &n);

		for(i; i <= n; i++)
			sum += (pow((-1), i))/(pow(i, 2));

		printf("Sum = %lf\n", sum);

		while(i <= n){
			i++;
			sum += (pow((-1), i))/(pow(i, 2));
		}
		printf("Sum (by while) = %lf\n", sum);
	break;
	case 7:
		printf("Task 4.3:\n DO WHILE:\n\nEnter the low border: ");
		scanf("%d", &i);
		printf("Enter the high border: ");
		scanf("%d", &n);

		do{
			sum += i;
			i++;
		}while(i <= n);

		printf("Sum = %lf\n", sum);
	break;
	case 8:
		printf("Task 5:\n GOTO:\n\n");

		silly_questions:
		printf("Are you ready? Yes(1) No(0): ");
		scanf("%d", &choose);
		if(choose == 1){
			printf("Are you sure, that are you ready? Yes(1) No(0): ");
			scanf("%d", &choose);
			if(choose == 1){
				printf("Are you sure, that are you sure, that are you ready? Yes(1) No(0)");
				scanf("%d", &choose);
				if(choose == 1){
					printf("Ok, we gonna to start!\n1st question: Was Napoleon low height? Yes(1) No(0): ");
					scanf("%d", &choose);
					if(choose == 1){
						printf("2nd question: The US signed the Declaration of Independence in 1777? Yes(1) No(0): ");
						scanf("%d", &choose);
						if(choose == 0){
							printf("3rd question: Have you ever been trolled? Yes(1) No(0): ");
							scanf("%d", &choose);
							if(choose == 0 || choose == 1)
								 goto silly_questions;
							else if(choose == 144154){
								printf("Wow, nice knight's move!!!\n\n");
							}
						}
						else goto silly_questions;
					}
					else goto silly_questions;
				}
				else goto silly_questions;
			}
			else goto silly_questions;
		}
		else goto silly_questions;
	break;
	default : printf("You fell through default!\n");}

	return EXIT_SUCCESS;
}
