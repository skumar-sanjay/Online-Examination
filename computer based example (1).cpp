// Project 'Online Exam...'

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void add();
int class10th();
int class11th();
int class12th();
int oneday();
int heading();
int details();
struct student {
	char stuname[30], gender[10],sclass[10],DOB[12];
	int rno;
}stu;

int main()
{
	char a;              // a = for enter and exit program   b=category of exam
	int score,b;
	heading();
	printf("\n\nEnter 1 to countinue the session || Press 0 to exit session : ");
	fflush(stdin);
	scanf("%c",&a);
	details();
	if (a=='1')                             // entery block main logic implement ..
	{
		printf("Welcome to Exam...\n");
	    printf("\n");
	    printf(" Select Your Exam Category : \n");
	    printf("(1) 10th Class \t \t (2) 11th Class\n");
	    printf("(3) 12th Class \t \t (4) One Day Exam\n");
	    printf("\nEnter Your Exam Category (Press the 1,2,3,4) : ");
	    fflush(stdin);
	    scanf("%d",&b);
	    system("cls");
	    //b=strupr(b);
	    printf("\n");
	    switch (b)
	    {
	    	case 1 :{
	    		add();
				score=class10th();
				details();
				printf("\n\n\n\t<<-------------------------------------------->>\n");
				printf("      || Roll No : %d                               ||\n",stu.rno);
				printf("      || Name : %s                              ||\n",stu.stuname);
				printf("      || Gender : %s                            ||\n",stu.gender);
				printf("      || DOB (dd-mm-yyyy) : %s                ||\n",stu.DOB);
				printf("      || You are gain mask %d/25                    ||\n",score);
				printf("\n\t<<-------------------------------------------->>");

				break;
			}
			case 2 : {
				add();
				score=class11th();
				printf("Roll No : %d\n",stu.rno);
				printf("Name : %s\n",stu.stuname);
			//	printf("Class : %s\n",b);
				printf("Gender : %s\n",stu.gender);
				printf("DOB (dd-mm-yyyy) : %s\n",stu.DOB);
				printf("You are gain mask %d/25\n",score);
				printf("Class : %s\n",b);
				break;
			}

			case 3 :{
				add();
				score=class12th();
				printf("Roll No : %d\n",stu.rno);
				printf("Name : %s\n",stu.stuname);
			//	printf("Class : %s\n",b);
				printf("Gender : %s\n",stu.gender);
				printf("DOB (dd-mm-yyyy) : %s\n",stu.DOB);
				printf("You are gain mask %d/25\n",score);
				printf("Class : %s\n",b);
				break;
			}

			case 4 :{
				add();
				score=oneday();
				printf("Roll No : %d\n",stu.rno);
				printf("Name : %s\n",stu.stuname);
			//	printf("Class : %s\n",b);
				printf("Gender : %s\n",stu.gender);
				printf("DOB (dd-mm-yyyy) : %s\n",stu.DOB);
				printf("You are gain mask %d/25\n",score);
				printf("Class : %s\n",b);
				break;
				break;
			}
			default : {
				printf("In-valid Exam Category");
				break;
			}

       }

   }

    else
	{
       	printf("Exit ");
	}

}


void add()
{
	heading();
	printf("\n\n\n\t\t\t\t\t*-------------------------------------------------*");
	printf("\n\n\t\t\t\t\t\t\tEnter the student name : ");
	fflush(stdin);
	gets(stu.stuname);
	printf("\n\t\t\t\t\t\t\tEnter your roll no : ");
	scanf("%d",&stu.rno);
	printf("\n\t\t\t\t\t\t\tGender : ");
	scanf("%s",&stu.gender);
	printf("\n\t\t\t\t\t\t\tEnter your DOB(dd-mm-yyyy): ");
	scanf("%s",&stu.DOB);
	system("cls");

	printf("\n");
}

int class10th()
{
	char ques[200],ans[25];
	int ques_no=25;
	int x,count=0;
	for (x=0;x<ques_no;x++)
	{
		switch (x) {
			case 0 :{
				printf("Q1.What does Parashurama consider as his own who breaks Lord Shiva's bow?\n");
				printf("(a) enemy\t \t (B) Brother\n");
				printf("(C) Friend \t \t (D) Neighbour\n ");
				fflush(stdin);
				printf("Answer is :");
				scanf("%c",&ans[x]);
				if (ans[x]=='A' || ans[x]=='a' ){
					printf("Correct\n");
					count++;
					printf("\n");
				}
				else
				{
					printf("In-correct\n");
					printf("\n");
				}
				system("cls");
				break;
	}

			case 1 :{
				printf("Q2.Where do warriors display their bravery?\n");
				printf("(A) At Home \t \t (B) In War\n");
				printf("(C) In Word \t \t (D) None of these\n ");
				fflush(stdin);
				printf("Answer is :");
				scanf("%c",&ans[x]);
				if (ans[x]=='B' || ans[x]=='b' )
				{
					printf("Correct\n");
					count++;
					printf("\n");
				}
				else
				{
					printf("In-correct\n");
					printf("\n");
				}
				system("cls");
				break;
			}

			case 2 : {
				printf("Q3.Parashuram is the bitter enemy of which clan?\n");
		printf("(A) Brahmin \t \t (B) Vaishya Lie\n");
		printf("(C) Kshatriya \t \t (D) None on these\n");
		fflush(stdin);
		printf("Answer is :");
		scanf("%c",&ans[x]);
		if (ans[x]=='C' || ans[x]=='c' )
				{
					printf("Correct\n");
					count++;
					printf("\n");
				}
				else
				{
					printf("In-Correct\n");
					printf("\n");
				}
					system("cls");
				break;
			}
			case 3 : {
				printf("Q4.What does Parshuram consider Shiva?\n");
				printf("(A) Father \t \t (B) Guru\n");
				printf("(C) God \t \t (D) The Servant\n");
				printf("Answer is :");
				fflush(stdin);
				scanf("%c",&ans[x]);
				if (ans[x]=='B' || ans[x]=='b' )
				{
					printf("Correct\n");
					printf("\n");
					count++;
				}
				else
				{
					printf("In-Correct\n");
					printf("\n");
				}
					system("cls");
				break;
			}
		case 4 :{
			printf("Q5.On whose advice did Parashuram kill his mother?\n");
		printf("(A) Father \t \t (B) Guru\n");
		printf("(C) Wife \t \t (D) None of these\n");
		printf("Answer is :");
		fflush(stdin);
		scanf("%c",&ans[x]);
		if (ans[x]=='A' || ans[x]=='a' )
				{
					printf("Correct\n");
					count++;
					printf("\n");
				}
				else
				{
					printf("In-Correct\n");
					printf("\n");
				}
					system("cls");
			break;
		}
		case 5 :{
			printf("Q6.Why was Lencho satisfied?\n");
			printf("(A) On seeing a new tractor in his field\n");
			printf("(B) On seeing a new buffalo\n");
			printf("(C) On seeing the field of ripe corn with flowers\n");
			printf("(D) None of the Above\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='c' || ans[x]=='C' )
				{
					printf("Correct\n");
					count++;
					printf("\n");
				}
				else
				{
					printf("In-Correct\n");
					printf("\n");
				}
					system("cls");
			break;
		}

		case 6 :{
			printf("Q7.Who read the letter sent by Lencho?\n");
			printf("(A) His Wife \t \t (B) The Postmaster\n");
			printf("(C) One of the Farmer \t (D) The God\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='B' || ans[x]=='b' )
				{
					printf("Correct\n");
					count++;
				}
				else
				{
					printf("In-Correct\n");
				}
				system("cls");
			break;
		}

		case 7 :{
			printf("Q8.Why was Lencho not surprised on seeing the money in the envelope?\n");
			printf("(A) He was to sad to acknowledge it \n");
			printf("(B) He had unwavering faith in God \n");
			printf("(C) He was an ungrateful man \n");
			printf("(D) None of the above \n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='A' || ans[x]=='a' )
				{
					printf("Correct\n");
					count++;
				}
				else
				{
					printf("In-Correct\n");
				}
				system("cls");
			break;
		}

		case 8: {
			printf("Q9.How much money did Lencho ask for? \n");
			printf("(A) 1000 pesos \t \t (B) 10 pesos\n");
			printf("(C) 50 pesos \t \t (D) 100 pesos\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='B' || ans[x]=='b' )
				{
					printf("Correct\n");
					count++;
				}
				else
				{
					printf("In-Correct\n");
				}
				system("cls");
			break;
		}

		case 9:{
			printf("Q10.Where was Lencho ’s house situated?\n");
			printf("(A) Bottom of the hill \t \t (B) Top of the hill\n");
			printf("(C) Top of a plateau \t \t (D) In a city\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='B' || ans[x]=='b' )
				{
					printf("Correct\n");
					count++;
				}
				else
				{
					printf("In-Correct\n");
				}
				system("cls");
			break;
		}

		case 10 : {
			printf("Q11.HCF of 8, 9, 25 is? \n");
			printf("(A) 8 \t \t (B) 9\n");
			printf("(C) 25 \t \t (D) 1 \n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // D
			if (ans[x]=='D' || ans[x]=='d' )
				{
					printf("Correct\n");
					count++;
				}
				else
				{
					printf("In-Correct\n");
				}
				system("cls");
			break;
		}
		case 11 : {
			printf("Q12.If p(x) is a polynomial of degree one and p(a) = 0, then a is said to be: \n");
			printf("(A) Zero of p(x) \t \t (B) Value of p(x)\n");
			printf("(C) Constant of p(x \t \t (D) None of the above\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // A
			if (ans[x]=='A' || ans[x]=='a' )
				{
					printf("Correct\n");
					count++;
				}
				else
				{
					printf("In-Correct\n");
				}
				system("cls");
			break;
		}

		case 12 : {
			printf("Q13.The number of polynomials having zeroes as –2 and 5 is?\n ");
			printf("(A) 1 \t \t (B) 2\n");
			printf("(C) 3 \t \t (D) More than 3\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // D
			if (ans[x]=='D' || ans[x]=='d' )
				{
					printf("Correct\n");
					count++;
				}
				else
				{
					printf("In-Correct\n");
				}
				system("cls");
			break;
		}

		case 13 : {
			printf("Q14.In an isosceles triangle ABC, if AC=BC and AB^2=2AC^2=, then the measure of angle C will be?\n ");
			printf("(A) 30deg \t \t (B) 45 deg\n");
			printf("(C) 60deg \t \t (D) 90deg \n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // D
			if (ans[x]=='D' || ans[x]=='d' )
				{
					printf("Correct\n");
					count++;
				}
				else
				{
					printf("In-Correct\n");
				}
				system("cls");
			break;
		}

		case 14 : {
			printf("Q15.A natural number, when increased by 12, equals 160 times its reciprocal. Find the number?\n ");
			printf("(A) 3 \t \t (B) 8\n");
			printf(" (C) 7 \t \t  (D) 4 \n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // B
			if (ans[x]=='B' || ans[x]=='b' )
				{
					printf("Correct\n");
					count++;
				}
				else
				{
					printf("In-Correct\n");
				}
				system("cls");
			break;
		}

		case 15 : {
			printf("Q16.Reema took 5ml of Lead Nitrate solution in a beaker and added approximately 4ml of \nPotassium Iodide solution to it. What would she observe ?\n");
			printf("(A) The solution turned red \t \t \t(B) Yellow precipitate was formed\n");
			printf(" (C) White precipitate was formed \t \t (D) The reaction mixture became hot\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='B' || ans[x]=='b' )
				{
					printf("Correct\n");
					count++;
				}
				else
				{
					printf("In-Correct\n");
				}
				system("cls");
			break;
		}

		case 16 : {
			printf("Q17.Which of the following correctly represents a balanced chemical equation?\n");
			printf("(A) Fe(s) + 4H2O(g) ? Fe3O4 (s) + 4H2(g) \t \t   (B) 3Fe(s) + 4H2O(g) ? Fe3O4 (s) + 4H2(g) \n");
			printf("(C) 3Fe(s) + H2O(g) ? Fe3O4 (s) + H2(g) \t \t   (D) 3Fe(s) + 4H2O(g) ? Fe3O4 (s) + H2(g)\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='B' || ans[x]=='b')
			{
				printf("Correct\n");
				count++;
			}
			else
			{
				printf("In-correct");
			}
				system("cls");
			break;
		}

		case 17 : {
			printf("Q18.The chemical reaction between copper and oxygen can be categorized as:\n");
			printf("(A)  Displacement reaction \t \t (B) Decomposition reaction\n");
			printf("(C) Combination reaction \t \t (D) Double displacement reaction \n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='C' || ans[x]=='c')
			{
				printf("Correct\n");
				count++;
			}
			else
			{
				printf("In-correct");
			}
			system("cls");
			break;
		}

		case 18 : {
			printf("Q19.A chemical reaction does not involve:\n");
			printf("(A) Formation of new substances having entirely different properties than that of the  reactants \n");
			printf("(B) Breaking of old chemical bonds and formation of new chemical bonds \n");
			printf("(C) Rearrangement of the atoms of reactants to form new products \n");
			printf("(D) Changing the atoms of one element into those of another element to form new products\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='D' || ans[x]=='d')
			{
				printf("Correct\n");
				count++;
			}
			else
			{
				printf("In-correct");
			}
			system("cls");
			break;
		}

		case 19 : {
			printf("Q20.Why is it important to balance a skeletal chemical equation?\n");
			printf("(A) To verify the law of conservation of energy. \n");
			printf("(B) To verify the law of constant proportion \n");
			printf("(C) To verify the law of conservation of mass \n");
			printf("(D) To verify the law of conservation of momentum \n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='c' || ans[x]=='C')
			{
				printf("Correct\n");
				count++;
			}
			else
			{
				printf("In-correct");
			}
				system("cls");
			break;
		}

		case 20 : {
			printf("Q21.While you are using Internet, you must be aware of?\n");
			printf("(A) How to conduct ourselves \t \t (B) How best to relate with others \n");
			printf("(C) What ethics, morals & values to maintain \t \t (D) All of these\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // d
			if(ans[x]=='D' || ans[x]=='d')
			{
				printf("Correct\n");
				count++;
			}
			else
			{
				printf("In-correct");
			}
				system("cls");
			break;
		}

		case 21 : {
			printf("Q22.Using the material without the permission of the owner or creator is called ?\n");
			printf("(A) Law Violation \t \t     (B) Copyright Violation\n");
			printf("(C) Cyber Law Violation \t \t (D) None of these\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // C
			if(ans[x]=='c' || ans[x]=='C')
			{
				printf("Correct\n");
				count++;
			}
			else
			{
				printf("In-correct");
			}
				system("cls");
			break;
		}

		case 22 : {
			printf("Q23.______ implies repeatedly targeting someone with intentions to hurt or embrass.\n");
			printf("(A) Cybercrime \t \t (B) Cyberbullying \n");
			printf("(C) Plagiarism \t \t (D) Intellectual Property Rights \n ");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // b
			if(ans[x]=='B' || ans[x]=='b')
			{
				printf("Correct\n");
				count++;
			}
			else
			{
				printf("In-correct");
			}
				system("cls");
			break;
		}

		case 23 : {
			printf("Q24.How can an antivirus protect your device?\n");
			printf("(A) It can protect it from overheating \t \t \t(B) It can increase its performance\n");
			printf("(C) It can prevent data from getting corrupt \t \t (D) It can backup data\n ");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // c
			if(ans[x]=='c' || ans[x]=='C')
			{
				printf("Correct\n");
				count++;
			}
			else
			{
				printf("In-correct");
			}
				system("cls");
			break;
		}

			case 24 : {
			printf("Q25.Which option is not required to keep a device cool?\n");
			printf("(A) Keep the device unplugged when in use \t \t \t(B) Do not cover a laptop with a blanket\n");
			printf("(C) Make sure the computer's CPU fan is working \t \t (D) Avoid leaving the device in the sun\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // a
			if(ans[x]=='A' || ans[x]=='a')
			{
				printf("Correct\n");
				count++;
			}
			else
			{
				printf("In-correct");
			}
				system("cls");
			break;
		}

		}
	}
	return count;
}

int class11th()
{
	int x,count=0,ques_no=25;
	char ques[200],ans[25];
	for (x=0;x<ques_no;x++)
	{
	switch (x){        //English
	  	case 0 :{
	  		printf("Q1. Why was Lencho satisfied?\n");
	  		printf("(A) On seeing a new tractor in his field.\t \t \t(B) On seeing a new buffalo.\n");
	  		printf("(C) On seeing the field of ripe corn with flowers.\t \t(D) None of the Above \n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
		  }

	        case 1 :{
		      	printf("Q2. Who read the letter sent by Lencho?\n");
	  		printf("(a) His Wife\t \t \t \t (b)The Postmaster \n");
	  		printf("(c) One of the farmer\t \t \t (d)The God.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
		  }

	        case 2 :{
		      	printf("Q3. Why was Lencho not surprised on seeing the money in the envelope?\n");
	  		printf("(a) he was too sad to acknowledge it\t \t (b) he had unwavering faith in God.\n");
	  		printf("(c) he was an ungrateful man\t \t (d) none of the above.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;

	          }

		case 3 :{
		      	printf("Q4. How much money did Lencho ask for?\n");
	  		printf("(a) 100 pesos\t \t (b) 1000 pesos.\n");
	  		printf("(c) 10 pesos\t \t (d) 500 pesos.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;;
		 }

		case 4 :{
		      	printf("Q5. Where did Lencho expect the downpour to come from?\n");
	  		printf("(a) north\t \t (b) north-east.\n");
	  		printf("(c) north-west\t \t (d) south-east.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
	         }

		case 5 :{    //physics
		      	printf("Q6.  In a parallel plate capacitor, the capacity increases if\n");
	  		printf("(a) area of the plate is decreased.\t \t (b) distance between the plates increases.\n");
	  		printf("(c) area of the plate is increased.\t \t (d) dielectric constantly decreases.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
	         }

		case 6 :{
		      	printf("Q7.  A charge is moving across a junction, then\n");
	  		printf("(a) momentum will be conserved.\t \t (b) momentum will not be conserved.\n");
	  		printf("(c) At some places, momenturii will be conserved and at some other places, momentum will not be conserved.\t \t (d) none of these.\n");
			printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
		 }

		case 7 :{
		      	printf("Q8.  A charge is moving across a junction, then\n");
	  		printf("(a) momentum will be conserved.\t \t (b) momentum will not be conserved.\n");
	  		printf("(c) at some places, momenturii will be conserved and at some other places, momentum will not be conserved.\t \t (d) none of these.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
	         }

		case 8 :{
		      	printf("Q9. The nature of parallel and anti-parallel currents are\n");
	  		printf("(a) parallel currents repel and antiparallel currents attract.\t \t(b) parallel currents attract and antiparallel currents repel.\n");
	  		printf("(c) both currents attract. \t \t (d) both currents repel.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
	         }

		case 9 :{
		      	printf("Q10. A current-carrying loop is placed in a uniform magnetic field. The torque acting on it does not depend upon\n");
	  		printf("(a) area of loopt \t (b) value of current.\n");
	  		printf("(c) magnetic field\t \t (d) None of these.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
	         }

		case 10 :{     //chemestory
		      	printf("Q11.The solubility of carbonates _____________ down the group.\n");
	  		printf("a) is irregular\t \t (b) remains the same.\n");
	  		printf("c) decreases\t \t d) increases.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
	  	}
	  	case 11 :{
		      	printf("Q12. A pure substance which contains only one type of atom is called ————–.\n");
	  		printf("(a) An element\t \t (b) a compound.\n");
	  		printf("(c) a solid\t \t (d) a liquid.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
	        }
		case 12 :{
		      	printf("Q13.The smallest particle that can take part in chemical reactions is ————–.\n");
	  		printf("(a) Atom \t \t(b) molecule.\n");
	  		printf("(c)Both (a) and (b)\t \t (d) None of these.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
	         }case 13 :{
		      	printf("The significant figures in 0.00051 are ————–.\n");
	  		printf("(a)5 \t \t(b) 6.\n");
	  		printf("(c) 2\t \t (d) 26.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
	         }case 14 :{
		      	printf("Q15.The number of significant figures in 6.02 x 1023 is ————–.\n");
	  		printf("(a) 23 \t \t(b) 3.\n");
	  		printf("(c) 4\t \t (d) None of these.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;

		 }
		 case 15 :{    //english
		      	printf("Q16.The number of significant figures in 6.02 x 1023 is ————–.\n");
	  		printf("(a) Mother’s cousins\t \t (b) Maternal grandmother.\n");
	  		printf("(c) Mother’s friends\t \t (d) Poet’s elder sisters.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
	     	 }case 16 :{
		      	printf("Q17How was the drum?.\n");
	  		printf("(a) Brand new \t \t (b) Shabby.\n");
	  		printf("(c)  Sound\t \t (d)  Dusty.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
		 }case 17 :{
		      	printf("Q18.Why did grandma celebrate in the evening?.\n");
	  		printf("(a)  On grandson’s birthday\t \t (b) In the joy of the arrival of my grandson.\n");
	  		printf("(c)  In the joy of her own birthday\t \t (d) In the joy of returning to village.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
	        }case 18 :{
		      	printf("Q19.Where were the three people shown in the photo?.\n");
	  		printf("(a)  At home \t \t (b) On trekking.\n");
	  		printf("(c) On the beach\t \t (d) In marriage.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
               	}
		case 19 :{
		      	printf("Q20.What is ‘cardboard’ in this poem?.\n");
	  		printf("(a)  3D effect \t \t (b)  Tears of joy.\n");
	  		printf("(c) Sea shore\t \t (d) Thick paper used to affix photographs.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
	         }                        //Biology
	        case 20 :{
		      	printf("Q21.A group of plants and animals with similar traits of any rank is\n");
	  		printf("(a)  Taxon \t \t (b)  Species.\n");
	  		printf("(c) Genus\t \t (d) Order.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
	         }
	        case 21 :{
		      	printf("Q22.Which is less general in characters as compared to genus?\n");
	  		printf("(a)  Family \t \t (b)  Division.\n");
	  		printf("(c) Class \t \t (d) Species.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
	         }
	       	case 22 :{
		      	printf("Q23.Energy transformation is never 100% efficient because of\n");
	  		printf("(a)  Catabolism \t \t (b)  Entropy.\n");
	  		printf("(c) Homeostasis\t \t (d) Anabolism.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
	         }
	       	case 23 :{
		      	printf("Q24.The defining characteristic of living beings is\n");
	  		printf("(a)  They reproduce \t \t (b)  They can digest their food.\n");
	  		printf("(c) They respond to external stimuli\t \t (d) They regenerate.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;
	         }
	       	case 24 :{
		      	printf("Q25.Nicotiana is a ————\n");
	  		printf("(a)  Species \t \t (b)  Sub-species.\n");
	  		printf("(c) Genus\t \t (d) Class.\n");
	  		printf("Enter your Answer : ");
	  		fflush(stdin);
	  		scanf("%c",&ans[x]);         //c
	  		if (ans[x]=='A' || ans[x]=='a')
	  		{
	  			count++;
			  }
	  		printf("\n");
			break;

	         }
  	}
	}
        return count;
}

int class12th()
{
	char ques[200],ans[25];
	int ques_no=25;
	int x,count=0;
	for (x=0;x<ques_no;x++)
	{
		switch (x) {
			case 0 :{
				printf("Q1.The principal value of tan-1(tan 3p/5) is?\n");
	              	printf("(A) 2p/5 \t \t (B) -2p/5\n");
	               	printf("(C)  3p/5 \t \t (D)  -3p/5\n");
	                	printf("Answer is :");
	              	scanf("%c\n",&ans[x]);
	               	if(ans[x]=='b' || ans[x]=='B')
	                     	{
	                     		count++;
					}
	                     printf("\n");
				break;
			}

			case 1 :{
				printf("Q2.sin[p/3 – sin-1(-½)] is equal to:\n");
	              	printf("(A) ½ \t \t (B)½ \n");
		              printf("(C) -1 \t \t (D)1 \n ");
	               	fflush(stdin);
	               	printf("Answer is :");
	              	scanf("%c",&ans[x]);
	               	if(ans[x]=='d' || ans[x]=='D')
	                     	{
	                     		count++;
					}

	                	printf("\n");
				break;
		        	}

			case 2 : {
				printf("Q3.The domain of sin–1(2x) is ?\n");
		              printf("(A) [0,1] \t \t\n (B)[-1,1]\n");
		              printf("(C) [-1/2,1/2]\t \t\n (D)[-2,2]\n");
		              fflush(stdin);
	              	printf("Answer is :");
	              	scanf("%c",&ans[x]);
	              	if(ans[x]=='c' || ans[x]=='D')
	                     	{
	                     		count++;
					}

	              	printf("\n");
				break;
			}
			case 3 : {
				printf("Q4. The value of the expression sin [cot–1 (cos (tan–1 1))] is?\n");
	              	printf("(A) 0 \t \t (B) 1\n");
	              	printf("(C)  1/v3 \t \t (D) v(2/3)\n");
	              	printf("Answer is :");
	              	fflush(stdin);
	              	scanf("%c",&ans[x]);
	              	if(ans[x]=='d' || ans[x]=='D')
	                     	{
	                     		count++;
					}
	                     	              	printf("\n");
				break;
			}
		case 4 :{
			printf("Q5. The value of sin (2 tan–1 (.75)) is equal to?\n");
	        	printf("(A).75 \t \t (B)1.5 \n");
	       	printf("(C) .96 \t \t (D)sin 1.5 \n");
	       	printf("Answer is :");
	       	fflush(stdin);
	       	scanf("%c",&ans[x]);
	       		if(ans[x]=='c' || ans[x]=='C')
	                     	{
	                     		count++;
					}

	       	printf("\n");
			break;
		}
		case 5 :{
			printf("Q6.What is the general formula for haloalkanes? (X=halogen atom, n = 1, 2, 3…)?\n");
			printf("(A) CnH2nX\n");
			printf("(B)CnH2n+1X\n");
			printf("(C)  CnH2n-1X\n");
			printf("(D)) CnH2n-3X \n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
				if(ans[x]=='b' || ans[x]=='B')
	                     	{
	                     		count++;
					}

			printf("\n");
			break;
		}

		case 6 :{
			printf("Q7.A monohaloarene is an example of a/an _______\n");
			printf("(A)aliphatic halogen compound  \t \t (B)aromatic halogen compound \n");
			printf("(alkyl halide \t (D)  side chain substituted aryl halide\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
				if(ans[x]=='b' || ans[x]=='B')
	                     	{
	                     		count++;
					}

			printf("\n");
			break;
		}

		case 7 :{
			printf("Q8. Monohalo, dihalo, trihalo and tetrahalo are types of haloalkanes and haloarenes based on the _?\n");
			printf("(A) type of halogen atom \n");
			printf("(B)  number of halogen atoms \n");
			printf("(C) nature of carbon atom \n");
			printf("(D) hybridisation of C atom to which halogen is bonded \n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
				if(ans[x]=='b' || ans[x]=='B')
	                     	printf("Your Answer is correct");
	                     else
	                            printf("Your Answer is Incorrect");
			printf("\n");
			break;
		}

		case 8: {
			printf("Q9. Which of the following is a vinylic halide? \n");
			printf("(A)CH2=CHCHCl2 \t \t (B) CH3CHClCH3\n");
			printf("(C) (CH3)2C=CHCH2Cl \t \t (D)  CH3CH=CClCH2CH3\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
				if(ans[x]=='d' || ans[x]=='D')
	                     	{
	                     		count++;
					}

			printf("\n");
			break;
		}

		case 9:{
			printf("Q10.The compound in which a CH2Br group is attached to a benzene ring is an aryl halide.?\n");
			printf("(A) true \t \t (B) false\n");

			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
				if(ans[x]=='b' || ans[x]=='B')
	                     	printf("Your Answer is correct");
	                     else
	                            printf("Your Answer is Incorrect");
			printf("\n");
			break;
		}

		case 10 : {
			printf("Q11.HCF of 8, 9, 25 is? \n");
			printf("(A) 8 \t \t (B) 9\n");
			printf("(C) 25 \t \t (D) 1 \n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // D
			if(ans[x]=='d' || ans[x]=='D')
	                     	{
	                     		count++;
					}
	                     			printf("\n");
			break;
		}
		case 11 : {
			printf("Q12.If p(x) is a polynomial of degree one and p(a) = 0, then a is said to be: \n");
			printf("(A) Zero of p(x) \t \t (B) Value of p(x)\n");
			printf("(C) Constant of p(x \t \t (D) None of the above\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // A
				if(ans[x]=='b' || ans[x]=='B')
	                     	printf("Your Answer is correct");
	                     else
	                            printf("Your Answer is Incorrect");
			printf("\n");
			break;
		}

		case 12 : {
			printf("Q13.The number of polynomials having zeroes as –2 and 5 is?\n ");
			printf("(A) 1 \t \t (B) 2\n");
			printf("(C) 3 \t \t (D) More than 3\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // D
				if(ans[x]=='c' || ans[x]=='C')
	                     	{
	                     		count++;
					}
	                     			printf("\n");
			break;
		}

		case 13 : {
			printf("Q14. If an object is positively charged, theoretically the mass of the object _\n ");
			printf("(A) Increases slightly by a factor of 9.11*10-31 kg \t \t (B) Decreases slightly by a factor of 9.11*10-31 kg\n");
			printf("(C) ) Remains the same\t \t (D)  May increase or decrease \n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // D
				if(ans[x]=='c' || ans[x]=='C')
	                     	{
	                     		count++;
					}

			printf("\n");
			break;
		}

		case 14 : {
			printf("Q15.what are the liferary and slang?\n ");
			printf("(A) metaphonical expression and slang \t \t (B) similes\n");
			printf(" (C) irony \t \t  (D) none \n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // B
				if(ans[x]=='a' || ans[x]=='A')
	                     	{
	                     		count++;
					}

			printf("\n");
			break;
		}

		case 15 : {
			printf("Q16.Reema took 5ml of Lead Nitrate solution in a beaker and added approximately 4ml of \nPotassium Iodide solution to it. What would she observe ?\n");
			printf("(A) The solution turned red \t \t \t(B) Yellow precipitate was formed\n");
			printf(" (C) White precipitate was formed \t \t (D) The reaction mixture became hot\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
				if(ans[x]=='D' || ans[x]=='d')
	                     	printf("Your Answer is correct");
	                     else
	                            printf("Your Answer is Incorrect");
			printf("\n");
			break;
		}

		case 16 : {
			printf("Q17.what is the meaning of the word chuffed?\n");
			printf("(A) meaning delighted or very plesesd \t \t   (B) meaning hot happy\n");
			printf("(c)meaning frusted \t \t   (D) none\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
				if(ans[x]=='a' || ans[x]=='A')
	                     	{
	                     		count++;
					}

			printf("\n");
			break;
		}

		case 17 : {
			printf("Q18.The chemical reaction between copper and oxygen can be categorized as:\n");
			printf("(A)  Displacement reaction \t \t (B) Decomposition reaction\n");
			printf("(C) Combination reaction \t \t (D) Double displacement reaction \n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
				if(ans[x]=='b' || ans[x]=='B')
	                     	{
	                     		count++;
					}

			printf("\n");
			break;
		}

		case 18 : {
			printf("Q19.A chemical reaction does not involve:\n");
			printf("(A) Formation of new substances having entirely different properties than that of the  reactants \n");
			printf("(B) Breaking of old chemical bonds and formation of new chemical bonds \n");
			printf("(C) Rearrangement of the atoms of reactants to form new products \n");
			printf("(D) Changing the atoms of one element into those of another element to form new products\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
				if(ans[x]=='d' || ans[x]=='D')
	                     	{
	                     		count++;
					}
	                     		printf("\n");
			break;
		}

		case 19 : {
			printf("Q20.Why is it important to balance a skeletal chemical equation?\n");
			printf("(A) To verify the law of conservation of energy. \n");
			printf("(B) To verify the law of constant proportion \n");
			printf("(C) To verify the law of conservation of mass \n");
			printf("(D) To verify the l0aw of conservation of momentum \n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
				if(ans[x]=='B' || ans[x]=='b')
	                     	printf("Your Answer is correct");
	                     else
	                            printf("Your Answer is Incorrect");
			printf("\n");
			break;
		}

		case 20 : {
			printf("what is sophie in reality?\n");
			printf("(A) a dreamer \t \t (B) a fighter \n");
			printf("(C) a worker at biscuit factory \t \t (D) none\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // d
				if(ans[x]=='c' || ans[x]=='C')
	                     	{
	                     		count++;
					}

			printf("\n");
			break;
		}

		case 21 : {
			printf("Q22.Using the material without the permission of the owner or creator is called ?\n");
			printf("(A) Law Violation \t \t     (B) Copyright Violation\n");
			printf("(C) Cyber Law Violation \t \t (D) None of these\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // C
				if(ans[x]=='c' || ans[x]=='C')
	                     	{
	                     		count++;
					}
	                     	printf("\n");
			break;
		}

		case 22 : {
			printf("Q23.what does sophie dream about.\n");
			printf("(A) become an a actor \t \t (B) becoming a manager \n");
			printf("(C) a sophisticated person \t \t (D) becoming rich and sophisticated\n ");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // b
				if(ans[x]=='d' || ans[x]=='D')
	                     	{
	                     		count++;
					}

			printf("\n");
			break;
		}

		case 23 : {
			printf("Q24.How can an antivirus protect your device?\n");
			printf("(A) It can protect it from overheating \t \t \t(B) It can increase its performance\n");
			printf("(C) It can prevent data from getting corrupt \t \t (D) It can backup data\n ");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // c
				if(ans[x]=='c' || ans[x]=='C')
	                     	{
	                     		count++;
					}

			printf("\n");
			break;
		}

			case 24 : {
			printf("Q25.Which option is not required to keep a device cool?\n");
			printf("(A) Keep the device unplugged when in use \t \t \t(B) Do not cover a laptop with a blanket\n");
			printf("(C) Make sure the computer's CPU fan is working \t \t (D) Avoid leaving the device in the sun\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // a
				if(ans[x]=='d' || ans[x]=='C')
	                     	{
	                     		count++;
					}

			printf("\n");
			break;
		}

		}
	}
	return count;
}

int oneday()
{
	char ques[200],ans[25];
	int ques_no=25;
	int x,count=0;
	for (x=0;x<ques_no;x++)
	{

		switch (x) {
			case 0 :{
				printf("Q1.Humayun was born in the year ___________?\n");
				printf("(A) 1508\t \t (B) 1608\n");
				printf("(C) 1708 \t \t (D) 1808\n ");
				printf("Answer is :");
				fflush(stdin);
				scanf("%c",&ans[x]);
				if (ans[x]=='A' || ans[x]=='a')
				{
					count++;

				}
			    system("cls");

				break;
		        }

			case 1 :{
				printf("Q2. Who Invented the 3-D printer?\n");
	         	printf("(A)Nick Holonyak  \t \t (B) Elias Howe \n");
		        printf("(C) Chuck Hull \t \t (D) Christiaan Huygens  \n ");
		        fflush(stdin);
		        printf("Answer is :");
		        scanf("%c",&ans[x]);
		       	if (ans[x]=='b' || ans[x]=='B')
				{
					count++;

		      	}
			     system("cls");
			 	break;
		    	}

			case 2 : {
				printf("Q3. Fatehpur Sikri was founded as the capital of the Mughal Empire by ______?\n");
		        printf("(A)Jahangir \t \t (B) Akbar \n");
		        printf("(C)Babur \t \t (D) Humayun \n");
		        fflush(stdin);
		        printf("Answer is :");
		        scanf("%c",&ans[x]);
			    if (ans[x]=='A' || ans[x]=='a')
				{
					count++;

				}
			     system("cls");
			     break;
			   }

			case 3 : {
				printf("Q4.The maginot line exists between which country?\n");
		        printf("(A)France and Germany  \t \t (B) Germany and Poland \n");
		        printf("(C) Namibia and Angola  \t \t (D) USA and Canada \n");
		        printf("Answer is :");
		        fflush(stdin);
		        scanf("%c",&ans[x]);
			    if (ans[x]=='D' || ans[x]=='d')
				{
					count++;

				}
			    system("cls");
				break;
			    }

		case 4 :{
			printf("Q5.On whose advice did Parashuram kill his mother?\n");
	       	printf("(A) Father \t \t (B) Guru\n");
		    printf("(C) Wife \t \t (D) None of these\n");
		    printf("Answer is :");
		    fflush(stdin);
		    scanf("%c",&ans[x]);
			if (ans[x]=='C' || ans[x]=='c')
				{
					count++;

				}
		    system("cls");
			break;
		   }

		case 5 :{
			printf("Q6.Who was the first Tirthankara of the Jains?\n");
			printf("(A)Ajitnath\n");
			printf("(B)Parshwnath\n");
			printf("(C)Rishabhdev\n");
			printf("(D) None of the Above\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='A' || ans[x]=='a')
				{
					count++;
				}
			system("cls");
			break;
		    }

		case 6 :{
			printf("Q7. In the India-Australia one day match, due to rain, India needed 324 runs in 48 overs to win. In initial 10 overs, the average scoring rate was 6, but in next 10 overs it increased to 8.5. It then declined to 5.5 in next 10 overs and again rose to 7 in next 10 overs. To win the match now what average is needed?\n");
			printf("(A)8.25 \t \t (B)7.75 \n");
			printf("(C)6.75 \t (D)7.0 \n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='B' || ans[x]=='b')
				{
					count++;
				}
			system("cls");
			break;
		    }

		case 7 :{
			printf("Q8. Average age of 7 family members is 75 years. But average age of 6 of them is 74 years 6 months. What is the age of the 7th family member?\n");
			printf("(A)8.0 \n");
			printf("(B)78\n");
			printf("(C)68\n");
			printf("(D)80\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='D' || ans[x]=='d')
				{
					count++;
		        }
			system("cls");
			break;
	    	}

		case 8: {
			printf("Q9  Average age of A and B is 30 years, that of B and C is 32 years and the average age of C and A is 34 years. The age of C is? \n");
			printf("(A)35 years\t \t (B)36 years\n");
			printf("(C)38 years\t \t (D)37 years\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='C' || ans[x]=='c')
				{
					count++;
			    }
			system("cls");
			break;
		    }

		case 9:{
			printf("Q10. The average of three numbers is 77. The first number is twice the second and the second number is twice the third. Find the first number.\n");
			printf("(A)33 \t \t (B)66\n");
			printf("(C)77 \t \t (D)1.32\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='A' || ans[x]=='a')
				{
					count++;
				}
			system("cls");
			break;
	     	}

		case 10 : {
			printf("Q11.HCF of 8, 9, 25 is? \n");
			printf("(A) 8 \t \t (B) 9\n");
			printf("(C) 25 \t \t (D) 1 \n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // D
			if (ans[x]=='D' || ans[x]=='d')
				{
					count++;
				}
			system("cls");
			break;
	     	}

		case 11 : {
			printf("Q12.If p(x) is a polynomial of degree one and p(a) = 0, then a is said to be: \n");
			printf("(A) Zero of p(x) \t \t (B) Value of p(x)\n");
			printf("(C) Constant of p(x \t \t (D) None of the above\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // A
			if (ans[x]=='A' || ans[x]=='a')
				{
					count++;
				}
			system("cls");
			break;
	     	}

		case 12 : {
			printf("Q13.The number of polynomials having zeroes as –2 and 5 is?\n ");
			printf("(A) 1 \t \t (B) 2\n");
			printf("(C) 3 \t \t (D) More than 3\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // D
			if (ans[x]=='D' || ans[x]=='d')
				{
					count++;
				}
			system("cls");
			break;
	     	}

		case 13 : {
			printf("Q14.In an isosceles triangle ABC, if AC=BC and AB^2=2AC^2=, then the measure of angle C will be?\n ");
			printf("(A) 30deg \t \t (B) 45 deg\n");
			printf("(C) 60deg \t \t (D) 90deg \n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // D
			if (ans[x]=='D' || ans[x]=='d')
				{
					count++;
				}
			system("cls");
			break;
	     	}

		case 14 : {
			printf("Q15.A natural number, when increased by 12, equals 160 times its reciprocal. Find the number?\n ");
			printf("(A) 3 \t \t (B) 8\n");
			printf(" (C) 7 \t \t  (D) 4 \n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // B
			if (ans[x]=='B' || ans[x]=='b')
				{
					count++;
				}
			system("cls");
			break;
	     	}

		case 15 : {
			printf("Q16.Reema took 5ml of Lead Nitrate solution in a beaker and added approximately 4ml of \nPotassium Iodide solution to it. What would she observe ?\n");
			printf("(A) The solution turned red \t \t \t(B) Yellow precipitate was formed\n");
			printf(" (C) White precipitate was formed \t \t (D) The reaction mixture became hot\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='A' || ans[x]=='a')
				{
					count++;
				}
			system("cls");
			break;
	     	}

		case 16 : {
			printf("Q17.The first number is twice the second and the second number is twice the third. Find the first number.\n");
			printf("(A) Fe(s) + 4H2O(g) ? Fe3O4 (s) + 4H2(g) \t \t   (B) 3Fe(s) + 4H2O(g) ? Fe3O4 (s) + 4H2(g) \n");
			printf("(C) 3Fe(s) + H2O(g) ? Fe3O4 (s) + H2(g) \t \t   (D) 3Fe(s) + 4H2O(g) ? Fe3O4 (s) + H2(g)\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='A' || ans[x]=='a')
				{
					count++;
				}
			system("cls");
			break;
	     	}

		case 17 : {
			printf("Q18.The chemical reaction between copper and oxygen can be categorized as:\n");
			printf("(A)  Displacement reaction \t \t (B) Decomposition reaction\n");
			printf("(C) Combination reaction \t \t (D) Double displacement reaction \n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='C' || ans[x]=='c')
				{
					count++;
				}
			system("cls");
			break;
	     	}

		case 18 : {
			printf("Q19.A chemical reaction does not involve:\n");
			printf("(A) Formation of new substances having entirely different properties than that of the  reactants \n");
			printf("(B) Breaking of old chemical bonds and formation of new chemical bonds \n");
			printf("(C) Rearrangement of the atoms of reactants to form new products \n");
			printf("(D) Changing the atoms of one element into those of another element to form new products\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='A' || ans[x]=='a')
				{
					count++;
				}
			system("cls");
			break;
	     	}

		case 19 : {
			printf("Q20.Why is it important to balance a skeletal chemical equation?\n");
			printf("(A) To verify the law of conservation of energy. \n");
			printf("(B) To verify the law of constant proportion \n");
			printf("(C) To verify the law of conservation of mass \n");
			printf("(D) To verify the l0aw of conservation of momentum \n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]);
			if (ans[x]=='C' || ans[x]=='c')
				{
					count++;
				}
			system("cls");
			break;
	     	}

		case 20 : {
			printf("Q21.Select the most appropriate one-word substitution for the given words.\n");
			printf("(A)Sheath \t \t (B) Quiver \n");
			printf("(C)Shank \t \t (D) All of these\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // d
			if (ans[x]=='D' || ans[x]=='d')
				{
					count++;
				}
			system("cls");
			break;
	     	}

		case 21 : {
			printf("Q22.Using the material without the permission of the owner or creator is called ?\n");
			printf("(A) Law Violation \t \t     (B) Copyright Violation\n");
			printf("(C) Cyber Law Violation \t \t (D) None of these\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // C
			if (ans[x]=='C' || ans[x]=='c')
				{
					count++;
				}
			system("cls");
			break;
	     	}

		case 22 : {
			printf("Q23.______ implies repeatedly targeting someone with intentions to hurt or embrass.\n");
			printf("(A) Cybercrime \t \t (B) Cyberbullying \n");
			printf("(C) Plagiarism \t \t (D) Intellectual Property Rights \n ");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // b
			if (ans[x]=='B' || ans[x]=='b')
				{
					count++;
				}
			system("cls");
			break;
	     	}

		case 23 : {
			printf("Q24.Select the misspelt word.\n");
			printf("(A)summon \t \t \t(B) conjure\n");
			printf("(C)foreiner \t \t (D) intrigue \n ");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // c
			if (ans[x]=='C' || ans[x]=='c')
				{
					count++;
				}
			system("cls");
			break;
	     	}

			case 24 : {
			printf("Q25.The most appropriate word to fill in the blank. Thomas did not ______ the vegetables because he was busy.\n");
			printf("(A)sits \t \t \t(B)siting\n");
			printf("(C)sit \t \t (D) to be sit\n");
			printf("Answer is :");
			fflush(stdin);
			scanf("%c",&ans[x]); // a
			if (ans[x]=='A' || ans[x]=='a')
				{
					count++;
				}
			system("cls");
			break;
	     	}

		}
	}
	return count;
}

int heading()
{
	printf("\n\t\t                             :::::::::::::::::::::::::::::::::::::::::::");
	printf("\n\t\t                             ::  ***********************************  ::");
	printf("\n\t\t                             ::  *      Welcome To  Online Exam    *  ::");
	printf("\n\t\t                             ::  ***********************************  ::");
	printf("\n\t\t                             :::::::::::::::::::::::::::::::::::::::::::");

}
int details()
{
	printf("\n\n\n\n\n\t\t\t\t\t\t\t\t<===================================================================================>\n");
	printf("\t\t\t\t\t\t\t\t|              **************TECH-EXPERTS***************                            |\n");
	printf("\t\t\t\t\t\t\t\t|                   Team manager -   Prakash Singh                                  |\n");
	printf("\t\t\t\t\t\t\t\t|                    Team Leader  -   Sanjay Kumar                                  |\n");
	printf("\t\t\t\t\t\t\t\t|                  PROJECT- COMPUTER BASE ONLINE EXAME                              |\n");
	printf("\t\t\t\t\t\t\t\t<===================================================================================>\n\n\n\n\n\n\n");


	printf("\t\t\t\t\t ||*********************TEAM MEMBERS***************** ||\n\n");
	printf("\t\t\t\t\t\t   1.Ayush Srivastav                                        \n");
	printf("\t\t\t\t\t\t   2.Gaurav Yadav                                           \n");
	printf("\t\t\t\t\t\t   3.Rohit Kumar yadav                                       \n");
	printf("\t\t\t\t\t\t   4.Sonu Vishwakarma                                        \n");
    printf("\t\t\t\t\t\t   5 Pavan Yadav                                             \n\n");
	printf("\t\t\t\t\t ||************************************************** ||\n\n");
}


