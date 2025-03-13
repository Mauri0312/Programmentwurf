#include "developer_group.h"                                                                // Include the header file for DeveloperGroup structure and related functions

int main() {
    DeveloperGroup group;                                                                   // Declare a DeveloperGroup variable
    initDeveloperGroup(&group, 
"                                              %%%@@@@@%                         \n"
"                                  %%@@@@%%%%#*#@@@@@@@@%                        \n"
"                                 ##***#@@@@@%********# @@                       \n"
"                              **********##############**##                      \n"
"                            *****++****#####################                    \n"
"                         #****+++*+++**#######**##########***#                  \n"
"                        ***++++*********####%**#########*%#****                 \n"
"                      #**+++++*##*++@@%#%%%%%*###%%%%%%#*#%#****#               \n"
"                     #**++++***+...-@@=:@=:-%=:-@@+=@==*%%%%##*++*              \n"
"                    #**+++******...-@@%%%:-##*.=@@+=@=---#%%%%#**+*             \n"
"                   ##*++*********=:.=%%*-+####=:%@@@#---+%%%%%###**#            \n"
"                   ##*+***************#***####%#+++=--=#%%%%%%%##***            \n"
"                  ###******###************###%%%%%%%%%%%%%%%%%%###**#           \n"
"                  ###*#***#%%%###*********###%%%%%%%%%%%%%%%%%%####*#           \n"
"                  #######******#*#%##******##%%%%%%%%%%%%%%%%%%%%%###           \n"
"              :...+#################%%%%%%%%%%%%@@@@@@@@@%%%%%%%%%%##           \n"
"         ......::-+#####################%%%%@@@@@@@@@@@%%%%%%%%%%%%%#           \n"
"       :..:::--==+##################%%%%%####%%%%%%%%%%%%%%%%%%%%%%%#           \n"
"      =.:-==++++  ####################%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%+-          \n"
"       ---===+++++##################%#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#==---       \n"
"         ==--====++###########=-=*#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*====---     \n"
"           ========+#####%%%%%-.....----=#%%%%%%%%%%%%%%%%%%%%%%%%%#*+=====--   \n"
"             ==--:--+###%%%%%%:...:::::::::-:::::-+%%%%%%%%%%%%%%%%  +++====-=  \n"
"             -:--==+*###%%%%%%%*::::::::::::::::---=%%%%%%%%%%%%%***+++=======  \n"
"               :::-==+*##%%%%%%+:::-%%%-:::-#%#----+%%%%%%%%%%%%#*++=======++   \n"
"               .:-===++*##%%%%%+:::-%%%::::*%%%----#%%%%%%%%%%#+++++===+++      \n"
"             .:::-===++++*#%%%%=:::=%%#:---#%%*---=%%%%%%%%%%#+==--=+*          \n"
"            ..::--===++++  *#*:::::+%%*----#%%=---+%%%%%%%%#**+==+===           \n"
"            ::.:==++=+++   -:-*#*=---#*----+#%=-===*%%%%# **++==-== =           \n"
"              ==++++       -::--+#%%%%%##***#%***###*+===+**+==---=+---         \n"
"                            :::--=*# %%%%%%%%%%%%  +=----==++==--=++--=         \n"
"                            :::--==*               ==-----==+++=====-=          \n"
"                            ::::--=++               +------==+++++++            \n"
"                            :::---==++               ------===                  \n"
"                            =::---===+               ------===                  \n"
"                             -:----====              ------====                 \n"
"                             ------====              ------====                 \n"
"                              -::--======            -----=====                 \n"
"                            :---=====+===          -=-------=====               \n"
"                            :---------=+=          -:::::===--==+-              \n"
"                           :---------=====         -:---:.::--=====             \n"
"                         ::+:::::--=-===+=         :::::.....---==**=           \n"
"                         :....::----==++++         --::::...::-::::::=-         \n"
"                        .....:::--===+++++        =------::..::......:::-       \n"
"                       :...:::---====++*          =-------::........::---       \n"
"                       -::.:::---==+++               =-----:......:::-----      \n"
"                       =------====+++*                   =-::::::::::---==      \n"
"                          =====+*                          ----------====+      \n");      // Initialisation of the Group-LOGO

    Developer dev1, dev2;                                                                  // Declare two Developer variables
    initDeveloper(&dev1, "Yannick Schmitt", "2795628");                                    // Initialize the first developer
    initDeveloper(&dev2, "Maurice Manz", "1736702");                                       // Initialize the second developer

    addDeveloper(&group, &dev1);                                                           // Add the first developer to the group
    addDeveloper(&group, &dev2);                                                           // Add the second developer to the group

    int choice;                                                                            // Declare a variable to store the user's choice
    do {
        printf("\nChoose your action:\n");                                                 // Print the menu options
        printf("List Developers [1]\n");
        printf("Print Group Logo [2]\n");
        printf("Print Group [3]\n");
        printf("Exit [4]\n");
        printf("Choice:");                                                                 // Prompt the user for their choice
        if (scanf("%d", &choice) != 1) {                                                   // Read the user's choice
            while (getchar() != '\n');                                                     // Clear the input buffer if the input is invalid
            printf("Invalid input! Please enter a number.\n");
            choice = 0;                                                                    // Reset choice to avoid invalid case
        }

        switch (choice) {                                                                  // Handle the user's choice
            case 1:
                listDevelopers(&group);                                                    // List the developers in the group
                break;
            case 2:
                printGroupLogo(&group);                                                    // Print the group logo
                break;
            case 3:
                printCombination(&group);                                                  // Print the group logo and list the developers
                break;
            case 4:
                break;                                                                     // Exit the program
            default:
                printf("Invalid choice!\n");                                               // Handle invalid choices
        }
    } while (choice != 4);                                                                 // Continue the loop until the user chooses to exit

    return 0;                                                                              // Return 0 to indicate successful execution
}
