#include<stdio.h>           // header file
#include<stdlib.h>          // header file
#include<string.h>          // header file
         /*  MAIN CALCULATION FUNCTIONS  */
void login(int op1);                    // function prototype
void  signUp(int op1);                  // function prototype
void addDocInfo(int op1);               // function prototype
void addPatientInfo(int op1);           // function prototype
void searchDoctorInfo(int op1);                // function prototype
void searchPatientInfo(int op1);               // function prototype
void editDoctorInfo(int op1);           // function prototype
void editPatientInfo(int op1);          // function prototype
int printInConsole(int op);             // function prototype
float Bill(int op);                     // function prototype
             /*  MAKE FOR CALL UPPER FUNCTIONS  */
void loginSignup(int op1);         // function prototype
void addInfo(int op1);             // function prototype
void searchInfo(int op1);          // function prototype
void editInfo(int op1);            // function prototype
void medicine(int op1);            // function prototype
void hospitalUsersLogin(int op1);       // function prototype
void patientUsersLogin(int op1);        // function prototype
void hospitalUsers(int op1);       // function prototype
void patientUsers(int op1);        // function prototype

// MAIN FUNCTION START
//*********************
int main()
{
    system(" color e0");        // change console and typing color
    int op1;     // declare an integer variable
    printf("\n\t\t * * * * HOSPITAL INFORMATION USAGE SYSTEM * * * * \n\t\t  -----------------------------------------------\n");      // Prompt message
    printf("\n\n  1. For Hospital Users\n  2. For Patient Users\n  3. Exit\n\n Enter an option: ");       // Prompt message
    scanf("%d",&op1);        // Entry the value of op1
    if(op1 == 1)
    {
        hospitalUsersLogin(op1);        // use for hospital employee
    }
    else if(op1 == 2)
    {
        patientUsersLogin(op1);         // use for patients
    }
    else                // when op is grater than 3 system will EXIT
        exit(0);            // The program will end

    return 0;
}
// MAIN FUNCTION END
//*******************

// LOGIN FOR HOSPITAL
//********************
void hospitalUsersLogin(int op1)         // User define function START
{
    int op;         // declare an integer variable
    system("cls");     // clear previous lines from console screen
    printf("\n\t\t * * * * HOSPITAL INFORMATION USAGE SYSTEM * * * * \n\t\t  -----------------------------------------------\n");      // Prompt message
    printf("\n\n  1. Login / Sign up\n  2. Exit\n\n\tEnter an option: ");   // Prompt message
    scanf("%d",&op);        // Entry the value of op
    if(op==1)          // when op is 1 loginSignup function will get access
    {
        system("cls");     // clear previous lines from console screen
        loginSignup(op1);     // This function is called which has login and signUp functions
    }
    else                // when op is grater than 5 system will EXIT
        exit(0);            // The program will end

}
// HOSPITAL MENU
//**************
void hospitalUsers(int op1)             // User define function START
{
    int op;         // declare an integer variable
    system("cls");     // clear previous lines from console screen
    printf("\n\t\t * * * * HOSPITAL INFORMATION USAGE SYSTEM * * * * \n\t\t  -----------------------------------------------\n");      // Prompt message
    printf("\n\n  1. Add Information\n  2. Search Informations\n  3. Edit Information\n  4. Medicine Shop\n  5. Exit\n\n\tEnter an option: ");   // Prompt message
    scanf("%d",&op);        // Entry the value of op
    if(op==1)      // when op is 2 addInfo function will get access
    {
        system("cls");      // clear previous lines from console screen
        addInfo(op1);          // This function is called which has addPatientInfo and addDocInfo functions
    }
    else if(op==2)      // when op is 3 searchInfo function will get access
    {
        system("cls");      // clear previous lines from console screen
        searchInfo(op1);       // This function is called which has searchDoctorInfo and searchPatientInfo functions
    }
    else if(op==3)      // when op is 4 editInfo function will get access
    {
        system("cls");      // clear previous lines from console screen
        editInfo(op1);         // This function is called which has editPatientInfo and editDocInfo functions
    }
    else if(op==4)      // when op is 5 medicines function will get access
    {
        system("cls");      // clear previous lines from console screen
        medicine(op1);         // This function is called which has printInConsole and Bill functions
    }
    else                // when op is grater than 5 system will EXIT
        exit(0);            // The program will end
}
// LOGIN FOR OUTSIDER'S USE
//*************************
void patientUsersLogin(int op1)          // User define function START
{
    int op;          // declare an integer variable
    system("cls");     // clear previous lines from console screen
    printf("\n\t\t * * * * HOSPITAL INFORMATION USAGE SYSTEM * * * * \n\t\t  -----------------------------------------------\n");      // Prompt message
    printf("\n\n  1. Login / Sign up\n  2. Exit\n\n\tEnter an option: ");   // Prompt message
    scanf("%d",&op);        // Entry the value of op
    if(op==1)          // when op is 1 loginSignup function will get access
    {
        system("cls");     // clear previous lines from console screen
        loginSignup(op1);     // This function is called which has login and signUp functions
    }
    else                // when op is grater than 3 system will EXIT
        exit(0);            // The program will end
}
// OUTSIDER'S MENU
//*****************
void patientUsers(int op1)              // User define function START
{
    int op;          // declare an integer variable
    system("cls");     // clear previous lines from console screen
    printf("\n\t\t * * * * HOSPITAL INFORMATION USAGE SYSTEM * * * * \n\t\t  -----------------------------------------------\n");      // Prompt message
    printf("\n\n  1. Search Informations\n  2. Medicine Shop\n  3. Exit\n\n\tEnter an option: ");   // Prompt message
    scanf("%d",&op);        // Entry the value of op
    if(op==1)      // when op is 3 searchInfo function will get access
    {
        system("cls");      // clear previous lines from console screen
        searchInfo(op1);       // This function is called which has searchDoctorInfo and searchPatientInfo functions
    }
    else if(op==2)      // when op is 5 medicine function will get access
    {
        system("cls");      // clear previous lines from console screen
        medicine(op1);         // This function is called which has printInConsole and Bill functions
    }
    else                // when op is greater than 3 system will EXIT
        exit(0);            // The program will end
}
// CALL LOGIN AND SIGNUP FUNCTION IN THIS FUNCTION
//************************************************
void loginSignup(int op1)          // User define function START
{
     system("cls");     // clear previous lines from console screen
    int op;         // declare an integer variable
    printf("\n\t\t * * * * HOSPITAL INFORMATION USAGE SYSTEM * * * * \n\t\t  -----------------------------------------------\n");      // Prompt message
    printf(" \n 1. Login \n 2. Sign Up \n 3. Return To MENU\n \nChoose an option ( 1 or 2 ): ");      // Prompt message
    scanf("%d",&op);        // Entry the value of op
    if(op==1)               // When op is 1 login function will be called
    {
        system("cls");          // clear previous lines from console screen
        printf("\n\t\t * * * * HOSPITAL INFORMATION USAGE SYSTEM * * * * \n\t\t  -----------------------------------------------\n");      // Prompt message
        login(op1);                // function call
    }
    else if(op==2)          // When op is 2 signUp function will be called
    {
        system("cls");          // clear previous lines from console screen
        printf("\n\t\t * * * * HOSPITAL INFORMATION USAGE SYSTEM * * * * \n\t\t  -----------------------------------------------\n");      // Prompt message
        signUp(op1);               // function call
    }
    else               // when op is greater than 3 system will return to either hospitalUsers or patientUsers
    {
        system("cls");          // clear previous lines from console screen
        if(op1 == 1)
        {
            hospitalUsersLogin(op1);        // use for hospital employee
        }
        else if(op1 == 2)
        {
            patientUsersLogin(op1);         // use for patients
        }
    }
}
// CALL ADD FUNCTIONS FOR DOCTORS AND PATIENTS IN THIS FUNCTION
//*************************************************************
void addInfo(int op1)              // User define function START
{
     system("cls");     // clear previous lines from console screen
    int op;         // declare an integer variable
    printf("\n\t\t * * * * HOSPITAL INFORMATION USAGE SYSTEM * * * * \n\t\t  -----------------------------------------------\n");      // Prompt message
    printf(" \n 1. Add Doctors Information \n 2. Add Patients Information \n 3. Return To MENU\n \nChoose an option ( 1 or 2 ): ");        // Prompt message
    scanf("%d",&op);       // Entry the value of op
    if(op==1)               // When op is 1 addDocInfo function will be called
    {
        system("cls");           // clear previous lines from console screen
        printf("\n\t\t * * * * HOSPITAL INFORMATION USAGE SYSTEM * * * * \n\t\t  -----------------------------------------------\n");      // Prompt message
        addDocInfo(op1);            // function call
    }
    else if(op==2)          // When op is 2 addPatientInfo function will be called
    {
        system("cls");          // clear previous lines from console screen
        printf("\n\t\t * * * * HOSPITAL INFORMATION USAGE SYSTEM * * * * \n\t\t  -----------------------------------------------\n");      // Prompt message
        addPatientInfo(op1);       // function call
    }
    else               // when op is greater than 3 system will return to either hospitalUsers or patientUsers
    {
        system("cls");          // clear previous lines from console screen
        if(op1 == 1)
        {
            hospitalUsers(op1);        // use for hospital employee
        }
        else if(op1 == 2)
        {
            patientUsers(op1);         // use for patients
        }
    }
}
// CALL SEARCH FUNCTIONS FOR DOCTORS AND PATIENTS IN THIS FUNCTION
//****************************************************************
void searchInfo(int op1)           // User define function START
{
     system("cls");     // clear previous lines from console screen
    int op;          // declare an integer variable
    printf("\n\t\t * * * * HOSPITAL INFORMATION USAGE SYSTEM * * * * \n\t\t  -----------------------------------------------\n");      // Prompt message
    printf(" \n 1. Search Doctor's Information \n 2. Search Patient's Information \n 3. Return To MENU\n \nChoose an option ( 1 or 2 ): ");        // Prompt message
    scanf("%d",&op);        // Entry the value of op
    if(op==1)               // When op is 1 searchDoctorInfo function will be called
    {
        system("cls");          // clear previous lines from console screen
        printf("\n\t\t * * * * HOSPITAL INFORMATION USAGE SYSTEM * * * * \n\t\t  -----------------------------------------------\n");      // Prompt message
        searchDoctorInfo(op1);     // function call
    }
    else if(op==2)          // When op is 2 searchPatientInfo function will be called
    {
        system("cls");          // clear previous lines from console screen
        printf("\n\t\t * * * * HOSPITAL INFORMATION USAGE SYSTEM * * * * \n\t\t  -----------------------------------------------\n");      // Prompt message
        searchPatientInfo(op1);    // function call
    }
    else               // when op is greater than 3 system will return to either hospitalUsers or patientUsers
    {
        system("cls");          // clear previous lines from console screen
        if(op1 == 1)
        {
            hospitalUsers(op1);        // use for hospital employee
        }
        else if(op1 == 2)
        {
            patientUsers(op1);         // use for patients
        }
    }
}
// CALL EDIT FUNCTIONS FOR DOCTORS AND PATIENTS IN THIS FUNCTION
//***************************************************************
void editInfo(int op1)             // User define function START
{
     system("cls");     // clear previous lines from console screen
    int op;         // declare an integer variable
    printf("\n\t\t * * * * HOSPITAL INFORMATION USAGE SYSTEM * * * * \n\t\t  -----------------------------------------------\n");      // Prompt message
    printf(" \n 1. Edit Doctor's Information \n 2. Edit Patient's Information \n 3. Return To MENU\n \nChoose an option ( 1 or 2 ): ");        // Prompt message
    scanf("%d",&op);       // Entry the value of op
    if(op==1)               // When op is 1 editDoctorInfo function will be called
    {
        system("cls");          // clear previous lines from console screen
        printf("\n\t\t * * * * HOSPITAL INFORMATION USAGE SYSTEM * * * * \n\t\t  -----------------------------------------------\n");      // Prompt message
        editDoctorInfo(op1);     // function call
    }
    else if(op==2)          // When op is 2 editPatientInfo function will be called
    {
        system("cls");          // clear previous lines from console screen
        printf("\n\t\t * * * * HOSPITAL INFORMATION USAGE SYSTEM * * * * \n\t\t  -----------------------------------------------\n");      // Prompt message
        editPatientInfo(op1);    // function call
    }
    else               // when op is greater than 3 system will return to either hospitalUsers or patientUsers
    {
        system("cls");          // clear previous lines from console screen
        if(op1 == 1)
        {
            hospitalUsers(op1);        // use for hospital employee
        }
        else if(op1 == 2)
        {
            patientUsers(op1);         // use for patients
        }
    }
}
// CALL CONSOLE PRINT AND BILLING FUNCTIONS IN THIS FUNCTION
//***********************************************************
void medicine(int op1)             // User define function START
{
     system("cls");     // clear previous lines from console screen
    int op,op2;     // declare two integer variables
    float result;    // declare a float variable
    FILE *fp1;      // declare a FILE pointer variable
    printf("\n\t\t * * * * HOSPITAL INFORMATION USAGE SYSTEM * * * * \n\t\t  -----------------------------------------------\n");      // Prompt message

    fp1 = fopen("Slip.txt","a");        // Slip.txt file will open in append mood
    printf(" \n 1. Medicine Shop List \n 2. Return To MENU\n \nChoose an option ( 1 or 2 ): ");        // Prompt message
    scanf("%d",&op);        // Entry the value of op
    if(op==1)           // When op is 1 printInConsole and Bill functions will be called
    {
        printf("\t\t\n* * * * * Medicine Shop List * * * * *\n\n1. Medicine Shop 1\n2. Medicine Shop 2\n3. Medicine Shop 3\n4. Medicine Shop 4\n5. Medicine Shop 5\n6. Medicine Shop 6\n7. Medicine Shop 7\n8. Medicine Shop 8\n9. Medicine Shop 9\n10. Medicine Shop 10\n");        // Prompt message
        do                                      // LOOP star
        {
            printf("\nPress A Shop Number:  ");     // Prompt message
            scanf("%d",&op2);                    // Entry the value of op1
            printInConsole(op2);               // function call and pass the value of op2
        }
        while(op2>10);              // when op1 is greater than 10 the loop will repeat ; if op1 less than 10 the loop will end
        result = Bill(op2);                        // function call and pass the value of op2 and address of sum

        printf("\n  TOTAL Bill: TK %.2f\n", result);           // Total bill of medicine will print in console and create a new line
        printf("- - - - - - - - - - - - - - - - - - \n");
        fprintf(fp1,"\nTOTAL Bill: TK %.2f\n", result);        // Total bill of medicine will print in file and create a new line
        fprintf(fp1,"- - - - - - - - - - - - - - - - - -\n\n");
        fclose(fp1);                    // Slip.txt file will close
    }
    else                 // when op is grater than 2 system will return either hospitalUsers or patientUsers
    {
        system("cls");          // clear previous lines from console screen
        if(op1 == 1)
        {
            hospitalUsers(op1);        // use for hospital employee
        }
        else if(op1 == 2)
        {
            patientUsers(op1);         // use for patients
        }
    }
    char ch;        // declare a character variable
    printf("\n\n Enter ( Y ) To Return To MENU...\n Enter Any key to Exit...\n\nEnter Key:  ");        // Prompt message
    scanf(" %c", &ch);          // entry of the value of ch
    if(ch == 'Y' || ch == 'y')      // when ch is ( Y or y ) main function will be called
    {
        system("cls");          // clear previous lines from console screen
        if(op1 == 1)
        {
            hospitalUsers(op1);        // use for hospital employee
        }
        else if(op1 == 2)
        {
            patientUsers(op1);         // use for patients
        }
    }
    else                            // when ch is not ( Y or y ) the system will EXIT
    {
        exit(0);            // END OF THE PROGRAM
    }
}

// SIGN UP FUNCTION
//******************
void signUp(int op1)             // user define function START
{
    int r,pin,key,key1;         // variables declaration
    int m;
    char userName[15],userName1[15],firstName[10],lastName[8],firstName1[10],lastName1[8],phone1[12],phone[12];
    FILE *fp1,*fp2;         // File pointers

    if(op1 == 1)                // when user belongs from hospital this file will get access
    {
        fp2 = fopen("Hospital Login Info.txt","a");         //  file opens in append mood
    }
    else                         // when user belongs from outside this file will get access
    {
        fp2 = fopen("Patient Login Info.txt","a");          //  file opens in append mood
    }
    printf("\n Enter First Name: ");            // user inputs
    scanf("%s",firstName);
    printf(" Enter Last Name: ");
    scanf(" %s",lastName);
    printf(" Enter Phone Number: ");
    scanf(" %s",phone);
    r=0;               // initialize r = 0
    do                      // Loop start
    {
        printf(" Enter user name (Example: pikachu45) : ");         // user inputs
        scanf(" %s",userName);
        printf(" Enter your Pin (9 Digits) (Example: 123456789) : ");
        scanf("%d",&key);
        printf(" Confirm your Pin : ");
        scanf("%d",&key1);

        if(op1 == 1)                // when user belongs from hospital this file will get access
        {
        fp1 = fopen("Hospital Login Info.txt","r");         //  file opens in read mood
        }
        else                         // when user belongs from outside this file will get access
        {
        fp1 = fopen("Patient Login Info.txt","r");          //  file opens in read mood
        }

        while(fscanf(fp1,"%s %s %s %s %d",firstName1,lastName1,phone1,userName1,&pin)!=EOF)     // read the following file and store values in these variables
        {
            m= strcmp(userName1,userName);          // comparing user input and file data
            if(m == 0)                    // when it found match it will terminate
                break;
        }
        if(m == 0)           // when user input and file data matched this step will get access
        {
            printf(" \n\n * * * Try Another User Name * * *\n\n ");     // because we don't want to take same user name twice
        }
        else                // when user input and file data don't match, this step will get access
        {
            if(key == key1)     // comparing key
            {
                printf(" \n\n\t* * * Registration Successful * * *\n");
                r=1;        // when registration done successfully, r will get assign with 1 and loop will terminate
            }
            else            // when keys are not same
            {
                printf(" \n\n * * * Enter Same PIN Number * * *\n\n");
            }
        }
    }
    while(r == 0);      // loop will run until r is equal to 1, when r = 1 loop will terminate
    fprintf(fp2," %7s  %7s  %13s %12s  %11d\n",firstName,lastName,phone,userName,key);      // after the end of loop all info will print in this file
    fclose(fp1);        //  files closed
    fclose(fp2);

    char ch;        // character variable
    printf("\n\n Enter ( Y ) To Login...\n Enter Any key to Return Login / SignUp Panel...\n\n Enter Key:  ");
    scanf(" %c", &ch);              // input a character
    if(ch == 'Y' || ch == 'y')      // when ch is y or Y login function will active
    {
        login(op1);
    }
    else                // when ch is not (y or Y) loginSignup function will active
    {
        loginSignup(op1);
    }
}

// LOGIN FUNCTION
//****************
void login(int op1)              // user define function
{

    int r,pin,key;          // variables declaration
    int m,count=0;
    char userName[15],userName1[15],firstName1[10],lastName1[8],phone1[12];
    FILE *fp1;          //  file pointer to access files

    do                //  loop start
    {
        printf("\n Enter user name (Example: pikachu45) : ");
        scanf(" %s",userName);                                      // user inputs
        printf(" Enter your Pin (9 Digits) (Example: 123456789) : ");
        scanf("%d",&key);
        r=0;            // initialize r = 0
        if(op1 == 1)                // when user belongs from hospital this file will get access
        {
            fp1 = fopen("Hospital Login Info.txt","r");       //  file opens in reading mood
        }
        else                           // when user belongs from outside this file will get access
        {
            fp1 = fopen("Patient Login Info.txt","r");          //  file opens in reading mood
        }

        while(fscanf(fp1,"%s %s %d %s %d",firstName1,lastName1,&phone1,userName1,&pin)!=EOF)    // read the following file and store values in these variables
        {
            m= strcmp(userName1,userName);      // comparing user input and file data
            if(m==0)            // when it found match it will terminate
                break;
        }
        if(m == 0)              // when user input and file data matched this step will get access
        {
            if(key == pin)          // this step will found match with pin
            {
                printf("  \n\n\t       * * * Login Successful * * *\n\n");
                printf("\t   * * * YOU ARE READY TO ACCESS * * *\n\n\t     !!!! WELCOME TO OUR SYSTEM !!!! \n\n");
                r=1;                // if login done successfully ,r will get assign with 1 and terminate the loop

            }
            else        // if pin does not find any match then this message will display
            {
                printf(" \n\n * * * Entered Pin Wrong * * *\n\n");
            }
        }
        else            // if user name does not find any match then this message will display and the loop will be run again
        {
            printf(" \n\n * * * Entered User Name Wrong * * *\n\n");
        }
    }
    while(r==0);        // loop will run until r is equal to 1, when r = 1 loop will terminate
    fclose(fp1);        // file close
    gets(stdin);        // take an enter
    printf("\n\t\t * * * ENTER TO CONTINUE * * *");
    gets(stdin);         // take an enter
        system("cls");          // clear previous lines from console screen
        if(op1 == 1)
        {
            hospitalUsers(op1);        // use for hospital employee
        }
        else if(op1 == 2)
        {
            patientUsers(op1);         // use for patients
        }
}

// ADD DOCTOR INFORMATION
//*************************
void addDocInfo(int op1)                    // user define function
{
    FILE *fp1;                  // file pointer
    char name[15],degig[20],phn[15];  //declare character variable

    gets(stdin);
    printf("\nEnter Doctor's Name (Example: Saqib):  ");    //command user to input doctor's name
    gets(name);                           //assigning input to variable
    printf("Enter Doctor's Speciality: ");//command user to input doctor's specialty
    gets(degig);                         //assigning input to variable
    printf("Enter Doctor's Contact Number: ");     //command user to input doctor's contact number
    gets(phn);                             //assigning input to variable

    fp1=fopen("Doctor.txt","a");          //open file in append mode
    fprintf(fp1,"%10s %8s  %15s\n",name,degig,phn);//writing data in file
    fclose(fp1);                          //closing file

    char ch;                              //declare character variable
    printf("\n\n Enter ( Y ) To Return Home...\n Enter Any key to Return Add Information Panel...\n\nEnter Key:  ");//asking user
    scanf(" %c", &ch);                   //assigning user input

    if(ch == 'Y' || ch == 'y')          //loop start and comparing
    {
        system("cls");                  // clear previous lines from console screen
        if(op1 == 1)
        {
            hospitalUsers(op1);         // use for hospital employee
        }
        else if(op1 == 2)
        {
            patientUsers(op1);          // use for patients
        }
    }
    else
    {
        addInfo(op1);                     //calling the previous console screen
    }
}

// ADD PATIENT INFORMATION
//*************************
void addPatientInfo(int op1)              //user defined function
{
    FILE *fp2;                            //declaring file
    char name2[15],occupation[15],disease[15],phn[15], flblcab[15];      //declaring character variables

    gets(stdin);
    printf("\nEnter The Patient's Name & age (Example: Saqib(24) ):  "); //command user to input patient name
    gets(name2);                          //assigning input in variables
    printf("Enter Patient's occupation: ");    //command user to input patient's occupation
    gets(occupation);                    //assigning input in variables
    printf("Enter Patient's Phone number: ");   //command user to input patient's phone number
    gets(phn);                          //assigning user input in variables
    printf("Enter The Disease Name: "); //command user to input disease name
    gets(disease);                      //assigning input in variables
    printf("Enter The floor, block, cabin Number (Example: 2A2002 ): "); //command user to input floor.block.cabin name
    gets(flblcab);                      //assigning input in variables

    fp2=fopen("Patient.txt","a");       //file open
    fprintf(fp2,"%10s %10s %16s %12s %12s\n",name2,occupation,phn,disease,flblcab);//writing inputs in file
    fclose(fp2);                        //file close

    char ch;                            //declaring character variables
    printf("\n\n Enter ( Y ) To Return Home...\n Enter Any key to Return Add Information Panel...\n\nEnter Key:  ");         //asking user to continue
    scanf(" %c", &ch);                 //assigning input
    if(ch == 'Y' || ch == 'y')         //loop start and comparing
    {
        system("cls");                 // clear previous lines from console screen
        if(op1 == 1)
        {
            hospitalUsers(op1);        // use for hospital employee
        }
        else if(op1 == 2)
        {
            patientUsers(op1);         // use for patients
        }
    }
    else
    {
        addInfo(op1);                  //calling the previous console screen
    }
}

// DISPLAY THE LIST OF DOCTOR INFORMATION
//****************************************
void searchDoctorInfo(int op1)      // User define function
{
    int m;                    // taking int variable
    char name[25],name1[80];    // taking char variable
    FILE *fp1;                   //file pointer variable

    printf("Enter name: ");     // user enter his/her name
    fflush(stdin);          // warn the program to be ready to take a string input
    gets(name);                 // assigning user input to name variable
    printf("\n");           // new line
    fp1=fopen("Doctor.txt","r");        // opening a file named doctor.txt

    while(fgets(name1,80,fp1)!=NULL)   // reading doctor's information from doctor.txt file
    {
        m = strstr(name1,name);         // comparing user input with stored doctor name
        if(m != NULL)        //if user input match with store doctor's name then go into it
        {
            puts(name1);   // display matching doctor's information from doctor.txt file
        }
    }
    fclose(fp1);    // doctor.txt file close

    char ch;        // char ch for char input
    printf("\n\n Enter ( Y ) To Return Home...\n Enter Any key to Return Search Panel...\n\nEnter Key:  ");     // for guiding user if he wants, he can back to main menu
    scanf(" %c", &ch);       // char input in ch variable

    if(ch == 'Y' || ch == 'y')      // when user press y this step will get access
    {
        system("cls");          // clear previous lines from console screen
        if(op1 == 1)
        {
            hospitalUsers(op1);        // use for hospital employee
        }
        else if(op1 == 2)
        {
            patientUsers(op1);         // use for patients
        }
    }
    else
    {
        searchInfo(op1);        // Return to Search Panel
    }
}

// DISPLAY THE LIST OF PATIENT INFORMATION
//*****************************************
void searchPatientInfo(int op1)     // User define function
{
    int m;                      // taking int variable
    FILE *fp2;          // file pointer
    char name[25],name1[100];         // taking char variable

    printf("Enter name: ");   // taking char variable name and name1
    fflush(stdin);
    gets(name);              // assigning user input to name variable
    printf("\n");           // new line
    fp2=fopen("Patient.txt","r");   // opening a file named patient.txt

    while(fgets(name1,100,fp2)!=NULL)    // reading patient's information from patient.txt file
    {
        m = strstr(name1,name);         // comparing user input with stored patient name
        if(m != NULL)            //if user input match with store patient's name then go into it
        {
            printf("   Name(Age)    Occupation      Contact      Disease    Floor-Block-Cabin no.\n ");
            puts(name1);        // display matching patient's information from doctor.txt file
        }
    }
    fclose(fp2);   // patient.txt file close

    char ch;              // ch for character input
    printf("\n\n Enter ( Y ) To Return Home...\n Enter Any key to Return Search Panel...\n\nEnter Key:  "); // for guiding user if he wants, he can back to main menu
    scanf(" %c", &ch);    // char input in ch variable

    if(ch == 'Y' || ch == 'y')  // cheaking user input y
    {
        system("cls");          // clear previous lines from console screen
        if(op1 == 1)
        {
            hospitalUsers(op1);        // use for hospital employee
        }
        else if(op1 == 2)
        {
            patientUsers(op1);         // use for patients
        }
    }
    else
    {
        searchInfo(op1);            // Return to Search Panel
    }
}

// EDIT DOCTOR INFORMATION
//**************************
struct store{                           // structure for storing Doctor file data
    char name[15],degi[15],phn[15];
};
void editDoctorInfo(int op1)             // user define function START
{
    struct store inf,inf1[100];         // Structure variable declare
    char chr;                           // other variable declare
    int i,j=0;
    FILE *fp1, *fp2;                    // FILE pointers

    fp1=fopen("Doctor.txt","r");            // FIlE open in read mood
    fp2=fopen("Doctor1.txt","w");           // FIlE open in write mood
    while(fscanf(fp1,"%s %s %s",inf.name,inf.degi,inf.phn)!=EOF)        // scan data in these variables
    {
        strcpy(inf1[j].name,inf.name);              // copy data to string array
        strcpy(inf1[j].degi,inf.degi);
        strcpy(inf1[j].phn,inf.phn);
        j++;                                // after one line complete array address will increase by 1
    }
    printf(" The lines number in the file : %d \n \n",  j);     //  line  count will display

    fflush(stdin);                  //  warn program before taking a string input
    printf("Search name to change data: ");
    gets(inf.name);                     // string input
    for(i=0;i<j;i++)           // loop starts
    {
        int m=strstr(inf1[i].name,inf.name);        // search input data from the string array
        if(m!=NULL){                                    // if data found match loop will inside and change contact number
                fflush(stdin);                      // Warning
                    printf("Enter new Contact Number: ");
                    gets(inf1[i].phn);              // take new data
        }
          fprintf(fp2,"%10s   %8s   %15s\n",inf1[i].name,inf1[i].degi,inf1[i].phn);     // print in file
    }                        //  loop ends

    fclose(fp1);            // file close
    fclose(fp2);            // file close
    remove("Doctor.txt");      // remove first file
    rename("Doctor1.txt","Doctor.txt");         // replace the temp file with actual file
     char ch;              // ch for character input
    printf("\n\n Enter ( Y ) To Return Home...\n Enter Any key to Return Edit Panel...\n\nEnter Key:  "); // for guiding user if he wants, he can back to main menu
    scanf(" %c", &ch);    // char input in ch variable

    if(ch == 'Y' || ch == 'y')  // checking user input y
    {
        system("cls");          // clear previous lines from console screen
        hospitalUsers(op1);        // use for hospital employee
    }
    else
    {
        editInfo(op1);            // Return to Edit Panel
    }
}

// Edit PATIENT INFORMATION
//*************************
struct str{             // structure for storing Patient file data
    char name[15],occupation[15],phn[15],disease[15],flblcab[15];
};
void editPatientInfo(int op1)       // user define function START
{
    struct str inf, inf1[1000];         // Structure variable declare
    int i,j=0;                          // other variable declare
    FILE *fp1, *fp2;                    // FILE pointers
    fp1 = fopen("Patient.txt","r");         // FIlE open in read mood
    fp2 = fopen("Patient1.txt","w");        // FIlE open in write mood
    while(fscanf(fp1,"%s %s %s %s %s",inf.name,inf.occupation,inf.phn,inf.disease,inf.flblcab)!=EOF)         // scan data in these variables
    {
        strcpy(inf1[j].name,inf.name);                  // copy data to string array
        strcpy(inf1[j].occupation,inf.occupation);
        strcpy(inf1[j].phn,inf.phn);
        strcpy(inf1[j].disease,inf.disease);
        strcpy(inf1[j].flblcab,inf.flblcab);
        j++;                                // after one line complete array address will increase by 1
    }
    printf(" The lines number in the file : %d \n \n",  j);     //  line  count will display

    fflush(stdin);                           //  warn program before taking a string input
    printf("Search name to change data: ");
    gets(inf.name);                     // string input
    for(i=0;i<j;i++)           // loop starts
    {
        int m=strstr(inf1[i].name,inf.name);            // search input data from the string array
        if(m!=NULL){                                    // if data found match loop will inside and change contact number
                fflush(stdin);                      // Warning
                    printf("Change cabin Number: ");
                    gets(inf1[i].flblcab);          // take new data
        }
        fprintf(fp2,"%10s %14s   %11s  %8s  %7s\n",inf1[i].name,inf1[i].occupation,inf1[i].phn,inf1[i].disease,inf1[i].flblcab);     // print in file
    }
    fclose(fp1);        // Files close
    fclose(fp2);
    remove("Patient.txt");       // remove first file
    rename("Patient1.txt","Patient.txt");           // replace the temp file with actual file
     char ch;              // ch for character input
    printf("\n\n Enter ( Y ) To Return Home...\n Enter Any key to Return Edit Panel...\n\nEnter Key:  "); // for guiding user if he wants, he can back to main menu
    scanf(" %c", &ch);    // char input in ch variable

    if(ch == 'Y' || ch == 'y')  // checking user input y
    {
        system("cls");          // clear previous lines from console screen
        hospitalUsers(op1);        // use for hospital employee
    }
    else
    {
        editInfo(op1);            // Return to Edit Panel
    }
}

// PRINT MEDICINE LIST ON CONSOLE
//********************************
int printInConsole(int op)          // user define function START
{
    int j=0,serial;         // variables declare
    float price;
    char name[25];
    FILE *fp;       // file pointer
    if(op == 1)                             // this will work when the option comes here from medicines function
    {
        fp = fopen("Medicine Shop 1.txt","r");      // medicines files will open depending on the option
    }
    else if(op == 2)
    {
        fp = fopen("Medicine Shop 2.txt","r");
    }
    else if(op == 3)
    {
        fp = fopen("Medicine Shop 3.txt","r");
    }
    else if(op == 4)
    {
        fp = fopen("Medicine Shop 4.txt","r");
    }
    else if(op == 5)
    {
        fp = fopen("Medicine Shop 5.txt","r");
    }
    else if(op == 6)
    {
        fp = fopen("Medicine Shop 6.txt","r");
    }
    else if(op == 7)
    {
        fp = fopen("Medicine Shop 7.txt","r");
    }
    else if(op == 8)
    {
        fp = fopen("Medicine Shop 8.txt","r");
    }
    else if(op == 9)
    {
        fp = fopen("Medicine Shop 9.txt","r");
    }
    else if(op == 10)
    {
        fp = fopen("Medicine Shop 10.txt","r");
    }
    else
    {
        printf("\n * * Shop number is NOT IN THESE LIST * *\n");
        return op;              // when option is out of range this will return to calling function and take another input
    }
    while(fscanf(fp,"%d %s %f",&serial,name,&price)!= EOF)      // file data store in these variables
    {
        printf(" %d  %20s  \t  Tk %.2f\n",serial,name,price);           // print on console screen
        j++;                                                    // count the list line
    }
    printf("\n Total Medicine in this shop:  %d\n",j);      //  line  count will display
    fclose(fp);                         // file close
}

// FIND TOTAL AMOUNT OF BILL
//***************************
float Bill(int op)              // user define function START
{
    int i,serial,User_sl,n;         // variables declare
    float price,sum=0;
    char name[20];
    FILE *fp1,*fp;              // file pointers
    fp1 = fopen("Slip.txt","a");            // slip file open in append mood
    if(op == 1)                     // this will work when the option comes here from medicines function
    {
        fp = fopen("Medicine Shop 1.txt","r");          // medicines files will open depending on the option
    }
    else if(op == 2)
    {
        fp = fopen("Medicine Shop 2.txt","r");
    }
    else if(op == 3)
    {
        fp = fopen("Medicine Shop 3.txt","r");
    }
    else if(op == 4)
    {
        fp = fopen("Medicine Shop 4.txt","r");
    }
    else if(op == 5)
    {
        fp = fopen("Medicine Shop 5.txt","r");
    }
    else if(op == 6)
    {
        fp = fopen("Medicine Shop 6.txt","r");
    }
    else if(op == 7)
    {
        fp = fopen("Medicine Shop 7.txt","r");
    }
    else if(op == 8)
    {
        fp = fopen("Medicine Shop 8.txt","r");
    }
    else if(op == 9)
    {
        fp = fopen("Medicine Shop 9.txt","r");
    }
    else if(op == 10)
    {
        fp = fopen("Medicine Shop 10.txt","r");
    }
    else
    {
        printf("Shop number is NOT IN THESE LIST\n");
    }
    printf("\n Enter the quantity of medicine you need: ");
    scanf("%d",&n);                     // input for n
    if(n!=0){                          // when user wants to buy medicine,user gives an input greater than zero
    printf("\n Enter serial number to buy:     ");
    scanf("%d",&User_sl);                               // input for User_sl
    while(User_sl>50){          //  loop starts for taking valid serial numbers
        printf("\n * * * Invalid serial number * * *\n\n Enter serial number to buy:     ");
        scanf("%d",&User_sl);           // input valid serial number
    }                               // loop end
    i=0;        // initialize i
    while(fscanf(fp,"%d %s %f",&serial,name,&price)!= EOF)          // store data in these variables
    {
        while((i<n) && (User_sl == serial))     // loop will match these 2 conditions and go in or terminate
        {
            fprintf(fp1,"%5d  %16s  TK%6.2f\n",i+1,name,price);     // print output in file
            printf("         %15s  TK %.2f\n",name,price);          // print output in console
            i++ ;                   //  i will increase by 1 each time
            sum += price;           //  get sum of price
            if(i>=n)
                break;              // when i will be greater than n, then loop will terminate
            printf(" \nEnter serial number to buy more: ");
            scanf("%d",&User_sl);           // take next serial number to buy
            if(User_sl>50)          //  for taking valid serial numbers
            {
                printf("\n * * * Invalid serial number * * *\n\n Enter serial number to buy:     ");
                scanf("%d",&User_sl);       // input valid serial number
            }
        }
    }
    }else{
        exit(0);        // when user do not buy any medicine loop will exit
    }
    printf("\nYou buy %d medicines",i);             // print in console the number of medicines patient buy
    fprintf(fp1,"\nYou buy %d medicines",i);            // print in file the number of medicines patient buy
    fclose(fp);                    //  file close
    fclose(fp1);
    return sum;                 // return sum to the calling function
}


/*  ========== END ==========  */
