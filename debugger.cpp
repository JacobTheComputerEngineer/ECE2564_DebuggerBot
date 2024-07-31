#include "debugger.h"

int Problems[NumAssignments]={  NumProblemsHW1, NumProblemsHW2, NumProblemsHW3, NumProblemsHW4, NumProblemsHW5, 
                                NumProblemsHW6, NumProblemsHW7, NumProblemsHW8, NumProblemsHW9, NumProblemsHW10, 
                                NumProblemsHW11, NumProblemsHW12};

int projectProblems[NumProjects]={NumProblemsProj1, NumProblemsProj2, NumProblemsProj3};

std::string Q[NumAssignments][MaxProblems];
std::string A[NumAssignments][MaxProblems];
std::string PQ[NumProjects][MaxProjectProblems];
std::string PA[NumProjects][MaxProjectProblems];
std::string E[3][NumErrors];
std::string OHLink;
std::string OHP[NumAssignments][MaxProblems];
std::string POHP[NumProjects][MaxProjectProblems];

void setUpQandA()
{

    OHLink="OH Link : ";

// Homework 2 // Homework 2 // Homework 2 

    Q[1][0]="What are the warnings that are there upon opening?";
    A[1][0]="179-D is a warning that lets you know you made a variable that is not used anywhere in the code. Do not worry about it this time, but they should not be in the codes you write.";
    OHP[1][0]="1";

    Q[1][1]="0x?";
    A[1][1]="These numbers are in hexadecimal (0-F).";
    OHP[1][1]="b";
    
    Q[1][2]="Unsigned?";
    A[1][2]="Normally, ints have the range of -2,147,483,648 to 2,147,483,647. The keyword \"unsigned\" means that the variable does not use the negative range. Unsigned ints have a range of 0 to 4,294,967,296";
    
    Q[1][3]="Signed?";
    A[1][3]="Most data types are assumed to be signed, but we are just specifying here.";
    
    Q[1][4]="Not expecting the number?";
    A[1][4]="That is the point of this problem. The key lies within the \"signed\" and \"unsigned\". The most significant bit determines whether or not the variable is negative in signed variables. Keep that in mind, as well as how large of a number each data type can handle. It may also help to change the way the numbers are displayed in the debugger.";
    
    Q[1][5]="What are the warnings that are there upon opening?";
    A[1][5]="552-D is very similar to 179-D. Don't worry about it here, but it should not be in codes that you write. 188-D is a very helpful hint to the task at hand. Enjoy the problem.";
    
    Q[1][6]="What is #define?";
    A[1][6]="A definition of some word. Here, every instance of \"ARRAY_SIZE\" in the code will be treated as if it were the number 5.";
    
    Q[1][7]="What are the warnings that are there upon opening?";
    A[1][7]="179-D is a warning that lets you know you made a variable that is not used anywhere in the code. Do not worry about it this time, but they should not be in the codes you write.";
    
    Q[1][8]="Why is the loop running infinitely?";
    A[1][8]="This is the question that needs to be solved. For a hint, look at warning 188-D.";
    
    Q[1][9]="What are all of these extra header files I've never seen before?";
    A[1][9]="The header files grlib and LcdDriver are used to interact with the board. They will become more important and make more sense as the class continues.";
    
    Q[1][10]="What are all of these extra functions and structs I've never seen before?";
    A[1][10]="Graphics_Context is a struct that contains a lot of important information about the LCD screen. initializeGraphics uses the graphics context described earlier. Do not mess with it. make_time_string and smallNumToString are functions that we will be exploring in this assignment.";
    
    Q[1][11]="Why are some symbols in ' '?";
    A[1][11]="A symbol enclosed in ' ' represent an ascii character. It is essentially one character of a string ("").";
    
    Q[1][12]="What about the 0 and NULL?";
    A[1][12]="The 0 corresponds to the ascii character to end the string/message/whatnot. NULL is defined as 0 in a header file.";
    
    Q[1][13]="What is string0[0]?";
    A[1][13]="C uses \"0 based indexing\", which just means that the first item in an array is called 0.";
    
    Q[1][14]="How to use Graphics_drawString?";
    A[1][14]="Ctrl click on the function, this will take you to the definition in the header file. Here, you will see what parameters to put when you call the function. Some header files are very detailed, while some are not. Take a look at the header file, as well as the times it was used in this example.";
    
    Q[1][15]="How does snprintf differ from strncpy?";
    A[1][15]="snprintf will have the extra space as null characters (ends the string) while strncopy will not. These will be evident when you run the code. There are ways to have strncopy add a null character, https://cplusplus.com/ is an incredibly helpful website.";
    
    Q[1][16]="strncat?";
    A[1][16]="Take a look at the header file or https://cplusplus.com/ . Or even better - play around with it and find out what happens.";
    
    Q[1][17]="make_time_string?";
    A[1][17]="There is documentation above the function definition for you to read. It details the inputs and the intended output. You need to find some way to create the intended output using the methods provided to you.";
    
    Q[1][18]="Hint for make_time_string";
    A[1][18]="I heavily recommend looking at: https://cplusplus.com/reference/cstdio/snprintf/ and https://cplusplus.com/reference/cstdio/printf/";



// Homework 3 // Homework 3 // Homework 3 

    Q[2][0]="What is this new header file?";
	A[2][0]="driverlib is a library intended to help interface with the board.";
	
	Q[2][1]="What is BIT0?";
	A[2][1]="BIT0 is a mask with a single 1 in the LSB. There are many other masks, all viewable in the header file that is opened when you ctrl click on BIT0.";
	
	Q[2][2]="How to set specific bits?";
	A[2][2]="This was a concept learned in class, please attend ;) \nA particular bit can be target by a bit mask, and the different bit operations will change the behavior of how it is set. \nx&0=0 x&1=x \nx|0=x x|1=x \nx^0=x x^1=!x \nRemember to view the debugger to see if your implementations work.";
	
	Q[2][3]="How to complete this problem?";
	A[2][3]="In previous problems, most-all of the information needed was written in comments next to the problem. Here, everything is in the PDF.";
	
	Q[2][4]="#define pt2?";
	A[2][4]="COLOR_MASK is defined as an expression this time. It treated in the code as (BIT2 | BIT3) exactly. \nDefines work by essentially replacing the first word/identifier/etc with everything that follows.";
	
	Q[2][5]="typedef enum?";
	A[2][5]="enumerations are collections of (for our purposes) words all contained together. \nIt is a good coding practice that helps keep variables organized and understandable. \nThey will be used a lot in this course. \nThe problem mentions that something is missing, look through the code to find out what.";
	
	Q[2][6]="struct?";
	A[2][6]="A struct is like a class, except there are no functions inherently inside of it. There are only data members. \nThe problem mentions that something is missing, look through the code to find out what.";
	
	Q[2][7]="Functions that have \"color_t\" or \"LSR_t\" instead of \"int\" or \"void\" and the like?";
	A[2][7]="All of these (color_t, LSR_t, int, void, etc) are all datatypes. The function is returning the datatype it is declared with. It is the exact same process as int or void, just with a different datatype.";
	
	Q[2][8]="getColorSetting/getIntensitySetting/getFlickeringSetting?";
	A[2][8]="getColorSetting has been completed for you. Take a look at the structure of it, and try to understand the logic before completing the other functions.";
	
	Q[2][9]="updateIntensity/updateColor/updateFlicker?";
	A[2][9]="None of these have been completed for you. Also notice that all of these have a void return type. We are using pointers to change the value of the LSR_t itself. Use the ideas from the previous set of functions to get a handle on how to do these.";
	
	Q[2][10]="makeLSR?";
	A[2][10]="Use the 3 inputs and format them with bit operations and masks to create and return an LSR_t. The usage of these functions also give a little more insight on enums.";
	
	Q[2][11]="increaseLight?";
	A[2][11]="We are using the pointer to directly modify the LSR_t again. There are many methods to completing this task. Try things out and find what works!";
	
	Q[2][12]="Dot Notation?";
	A[2][12]="Use a dot to access members or functions belonging to the object.  \nHere, .lightSetting is accessing the member called lightSetting inside of the light_t struct.";
	
	Q[2][13]="I'm still stuck. Hint please?";
	A[2][13]="Sure - try things and play around with it. Read through the code and try to understanding what's happening for all of the functions. A good understanding of how variables and functions are called and used is a great thing to have to stay comfortable in this class.";



// Homework 4 // Homework 4 // Homework 4 

    Q[3][0]="Why do all of the P1 variables have a 0x40004C.. value?";
	A[3][0]="These variables are pointers, and they point to some place in memory. Because they are pointers, we use an asterisk (*) to dereference them, which just means we are using the value in the memory address stored in the pointer. The memory address is the value of the pointer, but the memory address itself can have a value attached to it. The IN, OUT, REN, and DIR pointers all have memory address which can be found in the registers or memory viewer, but here we have variables set to the address for easy access.";
	
	Q[3][1]="What is the 2<<1 and the like?";
	A[3][1]="The << operator in this context is a bitshift. In this question, it is shifting the value 2 by 1 bit to the left, making it 4. These are very useful for making bitmasks and such.";
	
	Q[3][2]="User guides?";
	A[3][2]="There are multiple references and manuals that you can look at. They are available on the external site and contain many useful pieces of information on how to use the board. Reading documentation is a very important part of this course, you should learn how to do it early on.";
	
	Q[3][3]="Why don't the value update as soon as I press the button?";
	A[3][3]="In debug mode, the processor is stuck in time. It is not receiving any inputs, doing any operations, or many other things. By stepping over, you are running the code line by line, and only then will the board update with its peripherals.";
	
	Q[3][4]="What is the importance of the number updating?";
	A[3][4]="Take a look at the manuals mentioned. The bits correspond to a certain pin of the processor. Read up on why they are important, and check out the class notes.";
	
	Q[3][5]="How do I go about changing BLR with the button?";
	A[3][5]="A framework has been laid out with you already with LL1 and LB1. Analyze what is going on and try to recreate it with the task at hand. Remember to use the informative tools you have to your advantage.";
	
	Q[3][6]="Configuring the pins?";
	A[3][6]="Pins can be configured much easier than in question 1. In this problem, we see usage of some functions from a header file. Use these from now on, and make/use HALs with them.";
	
	Q[3][7]="Set up HAL functions?";
	A[3][7]="The functions TurnOn_Launchpad_LL1 and LB1isPressed are examples of functions that could be in a HAL. There are no real rules for what needs to be in a HAL, but there is a convention for what should be. Follow the example provided to make your own functions and use the documentation available. ";
	
	Q[3][8]="What is the best way to check that my functions and configurations are correct?";
	A[3][8]="Do and change one thing at a time. Check all of the buttons with a working LED, and then check all of the LEDs with a working button. You will only need to set all of these up once, so if you have found the numbers already, use them.";
	
	Q[3][9]="How do I make the Turn_BoosterPack_LED function?";
	A[3][9]="This function takes in an input, and turns LEDs on and off as a result. The input is a color_t, which is an enum with limited values. You can use this to your advantage by making a simple control structure tailored to the enum. If you do not know how to make the colors requested, feel free to research about how colors act in light.";
	
	Q[3][10]="How do I impliment the Turn_BoosterPack_LED function?";
	A[3][10]="This can be implemented the same way a lot of the functions we have seen so far can. If a button in pressed, do a thing. If a different button is pressed, do something else. Place it all in a while loop to make it run constantly like we have been doing.";



// Homework 5 // Homework 5 // Homework 5 

    Q[4][0]="Welcome to the first big homework assignment!";
	A[4][0]="This homework assignment is similar to how to the rest of them, as well as projects, will be conducted.";
	
	Q[4][1]="This homework looks very big. How do I start?";
	A[4][1]="Take things one step at a time. Read the assignment, and focus on one part before thinking about the next - I recommend starting with the enums. How many states do you need? What colors? What shapes? They're all answered in the instructions.";
	
	Q[4][2]="What's the difference between refresh_input_manual and refresh_input_simulate?";
	A[4][2]="These functions both act as inputs, but they function very differently. The simulate function uses an array as the inputs. A sample array is given to you to look at and change. It can be made as large as you want, to whatever you want, and is needed for the later parts of the homework. The manual function should ONLY be used for debugging. I recommend using the simulate function.";
	
	Q[4][3]="How do I create an array of inputs that forces a sequence?";
	A[4][3]="Trace the sequence in the diagram given. Follow the states that you want and remember the inputs to get there. ";
	
	Q[4][4]="How do I erase the shapes?";
	A[4][4]="There is no technical \"erase\". It's all just a constant stream of electrical signals and pixels changing color. \"Erase\" means something will not be there anymore, but what does that mean in this context? Think about how to make whatever you drew not be visible anymore.";
	
	Q[4][5]="How to fill the shapes?";
	A[4][5]="Check out the header file =)";
	
	Q[4][6]="How to make the line bigger?";
	A[4][6]="There are a couple of solutions available. Try some things out, see what works. I won't spoil it for you =)";
	
	Q[4][7]="How to have the round show?";
	A[4][7]="Go back to one of the first homeworks. Use this as a guide for how to print text to the screen. It would also help to use a static variable when counting iterations.";
	
	Q[4][8]="Sometimes the state changes very quickly. What is happening?";
	A[4][8]="Check to make sure all of your case statements have breaks in the proper spots. ";
	
	Q[4][9]="The golden solution runs fine, but my code does not. What gives?";
	A[4][9]="The most common fix is to ensure that the linker attached. The correct one is msp432p401r.cmd. Find this from Project->Properties->General->Linker command file";
	
	Q[4][10]="Things are not going as planned?";
	A[4][10]="Go line by line and make sure you are telling the machine to do what you want. Pay special attention to braces and breaks and make sure the functions are called correctly. If everything looks right, debug. Debugging solves everything.";



// Homework 6 // Homework 6 // Homework 6 

    Q[5][0]="There are a bunch more files to pay attention to here, what's going on?";
	A[5][0]="The main file is labeled as such, this is where we've been coding mostly so far. Application.h has function declarations and enums relevant to this specific assignment. The entire HAL folder contains less abstracted code regarding peripherals. We will be writing in some of these files, and it will be handy to hold on to these for later.";
	
	Q[5][1]="How do I start?";
	A[5][1]="Sometimes large assignments can feel overwhelming to look at all at once. Go step by step, start with part A: add all of the boosterpack leds.";
	
	Q[5][2]="How do I add all of the boosterpack leds?";
	A[5][2]="There are a couple of steps to do this, and the hints available cover this well. For another hint, here are the steps: defines, declares, initialize. \nDefine the LEDs, declare them to the HAL, and initialize them in the HAL. \nRemember to check them one by one to ensure they work.";
	
	Q[5][3]="Why are my LEDs not lighting up? - I";
	A[5][3]="Check to make sure they were set up with the correct GPIO_PORT and GPIO_PIN. Also ensure they were declared and initialized.";
	
	Q[5][4]="Why are my LEDs not lighting up? - II";
	A[5][4]="Check to make sure all of the correct jumpers are there. There is a strip of jumpers that are labeled as LEDs towards the bottom of the board, make sure they are all there. If any are missing, fill out a form.";
	
	Q[5][5]="How do I add all of the boosterpack buttons?";
	A[5][5]="The buttons follow the same steps that the LEDs do. Test them the same way - change which button is to be pressed to see if a known working light is on.";
	
	Q[5][6]="How to add more colors to turnLaunchpadRGB?";
	A[5][6]="If you look at the function, it takes _RBGstatus as an input. This is an enum to which you can add to. Remember how to make the colors from previous homeworks. (Remember to use break statements)";
	
	Q[5][7]="turnBoosterpackRGB?";
	A[5][7]="This function has not yet been made - that is your job. There is a wonderful framework in turnLaunchpadRGB, take a look and study the ideas behind it. Remember to declare and define it in all the correct places.";
	
	Q[5][8]="What is this FSM?";
	A[5][8]="Before you try implementing it, draw it out first (this is a requirement). Go input by input, and match the outputs to the inputs. The LED will turn off after a button press that does not exist on the table and will turn back on after two more button presses. ";
	
	Q[5][9]="How do I start?";
	A[5][9]="I recommend with the basics: function declarations and enums. Try making an enum that copies the _appSmallFSMstate. Also make the function. From there, follow the format of the smallFSM. Everything is right there, and remember the break statements. And remember to read the instructions if you get lost.";
	
	Q[5][10]="How do I test?";
	A[5][10]="Nothing is better than trying it yourself. Flash it, and see how it runs. If something doesn't work, place a break point around where you think the issue is. Then debug -> play. This will cause the code to run until it reaches that breakpoint, very useful. If the issue isn't where you think it is, try some places around it, and make sure all of the buttons work and variables are passing through correctly.";



// Homework 7 // Homework 7 // Homework 7 

    Q[6][0]="How do I start?";
	A[6][0]="Go one part at a time, I recommend going top-down in the rubric. This is the first project, so try to keep code clean and easy to read.";
	
	Q[6][1]="How do I know what the defines for the UART are?";
	A[6][1]="This requires reading some documentation. I recommend the launchpad user guide 2.3.2 Application (or \"Backchannel\") UART. It talks about the instance of which UART we are using. ";
	
	Q[6][2]="BackChanneL UART with pins hardwired into the board you say?";
	A[6][2]="I wonder if the schematics on page 36 or 38 have anything to say about those... \nhttps://sites.google.com/vt.edu/introduction-to-embeddedsystem/technical-documents/launchpad-user-guide";
	
	Q[6][3]="Initialize other UART variables?";
	A[6][3]="Follow up the chain of variables. There is a UART variable, inside of which there is a UART_Config. Keep going and you'll find all of the relevant variables. You also need to set a few of them up. Take a look at what is given to you throughout the code. If you want to know what the values are, read the project description.";
	
	Q[6][4]="How do I set up the clockPrescalar, firstModReg, and secondModReg?";
	A[6][4]="Once you find your way over to uart.h, it'll tell you which bits these will be written in to. Search for these bits in the technical reference manual. The relevant part of the manual is 24.3.10. Remember that we are in oversampling mode, and that the baud rates we want are: 9600, 19200, 38400, 57600.";
	
	Q[6][5]="Initialize and enable UART instance?";
	A[6][5]="Hmm, I wonder what uart.h has to say about that.";
	
	Q[6][6]="UART_ hasChar/getChar/canSend/sendChar ?";
	A[6][6]="hasChar has been completed for you, and it's a good thing to study and learn from; use this for canSend.  \nAs for getChar, we have already confirmed that there is a character to get in hasChar, so now we need to receive the data. It is the same story for sendChar and when we want to transmit the data. \nIf you get lost somewhere, remember to look at the header files.";
	
	Q[6][7]="Implementing the baud rate LEDs?";
	A[6][7]="Compared to what we just did, this is simple stuff. Go ahead and turn on the needed LEDs.";
	
	Q[6][8]="More help please?";
	A[6][8]="That's it for the help on this homework. The best advice I can give you: try it. This is code, there is nothing you can't do. Try some things out, read some documentation, just find a solution that works. As long as it follows the guidlines listed, any solution is on the table, just find one that works for you.";
	


// Homework 11 // Homework 11 // Homework 11 

    Q[10][0]="1a?";
	A[10][0]="There is a define, feel free to use a stopwatch to confirm.";
	
	Q[10][1]="1b?";
	A[10][1]="Clock calculations =). Look back at the notes from ealier in the semester. If it helps (and it does), remember back to chemistry with unit conversions.";
	
	Q[10][2]="1c?";
	A[10][2]="There is another define. You can eye it to see if it's close enough or not.";
	
	Q[10][3]="1d?";
	A[10][3]="How many Timer32 clock cycles is the led on for?";
	
	Q[10][4]="1e?";
	A[10][4]="We know how long it's on and the percentage of time it's on for. Find the missing piece.";
	
	Q[10][5]="2?";
	A[10][5]="This is nearly the same as 1. You got this!";
	
	Q[10][6]="3?";
	A[10][6]="The blocking plays an important role. Think about what the timers are doing during that FOR loop. If it helps, take a stopwatch and see what is happening.";
	
	Q[10][7]="4?";
	A[10][7]="Line 4 is defining TIMER32. The #ifdef is the compiler asking \"is 'TIMER32' a thing that exists?\" Removing that will change the answer from yes to no and will change which part of the code is grayed out. \nOutside of that, it is the same as Q1 and Q2. You know what to do!";
	
	Q[10][8]="5?";
	A[10][8]="The same as Q1 and Q2 and Q4. You could probably make a script for this at this point.";
	
	Q[10][9]="6?";
	A[10][9]="Use what you've learned from Q3. You've made it this far, keep it up!";
	
	Q[10][10]="1abcd?";
	A[10][10]="Oh look at that the question says to read the code. Be sure to do that. There's always the user manuals to look at if you'd like to use them.";
	
	Q[10][11]="1e?";
	A[10][11]="Oh joy a clock divider. Divide one clock to get to the other.";
	
	Q[10][12]="1f?";
	A[10][12]="There are a few reasons why the light could be dim. Maybe it's not getting enough voltage (it is, do not worry about this), or maybe it's just not on for long enough.";
	
	Q[10][13]="Red LED?";
	A[10][13]="There are a few steps to implementing the red LED. Let's walk through how the blue boosterpack led was implemented.  \nTable 5 on the boosterpack user guide shows the led channels to the jumper channels. The launchpad user guide shows all of the pin connections. After finding the blue LED (J4.37), it links to pin 5.6. This pin also happens to have a pwm timerA attached to it - TA2.1 \nIf you look in the code, these things are all here. #define BLU_TIMER & #define BLU_CHANNEL have the timerA registers. initPWMPins has pin 5.6 all over it. \nGo ahead and follow the steps lined out for you. \nYou have completed the calculation for 100Hz, go ahead and use that alongside all of the other parameters.";
	
	Q[10][14]="Buzzer?";
	A[10][14]="This is a bonus =) \nYay free points =) \nYou're on your own ;)";

}

recents_t initializeRecents()
{
    recents_t recents;
    for(int i=0;i<RecentCount;i++)
    {
        recents.HWNumber[i]=-1;
        recents.IssueNumber[i]=-1;
        recents.used[i]=0;
    }
    return recents;
}

subMenu initializeSubMenu()
{
    subMenu menu;
    menu.state=None;
    return menu;
}

subMenu initializeErrorMenu()
{
    subMenu menu;
    menu.state=None;
    return menu;
}

AssignmentMenu initializeAssignmentMenu(int i, bool project)
{
    AssignmentMenu menu;
    if(project==0) 
    { 
        menu.name="HW"; menu.name.append(std::to_string(i+1)); 
        for(int j=0;j<Problems[i];j++)
            menu.assignment[j]=initializeSubMenu();
    }

    if(project==1) 
    { 
        menu.name="Proj"; menu.name.append(std::to_string(i+1)); 
        for(int j=0;j<projectProblems[i];j++)
            menu.assignment[j]=initializeSubMenu();
    }

    return menu;
}

Menu_t initializeMenu()
{

    Menu_t menu;

    for(int i=0;i<NumAssignments;i++)
    {
        menu.Assignments[i]=initializeAssignmentMenu(i, 0);
    }

    for(int i=0;i<NumProjects;i++)
    {
        menu.Projects[i]=initializeAssignmentMenu(i, 1);
    }

    for(int i=0;i<NumErrors;i++)
    {
        menu.Errors[i]=initializeErrorMenu();
    }

    return menu;
}

cursor_t initializeCursor()
{
    cursor_t cursor;
    cursor.index=0;
    cursor.state=Main;
    cursor.dontUpdateRecents=0;
    return cursor;
}

void updateCursor(cursor_t &cursor, keys key, Menu_t &menu, recents_t recents)
{
    cursor.dontUpdateRecents=0;
    bool left=key.arrows[0];
    bool up=key.arrows[1];
    bool right=key.arrows[2];
    bool down=key.arrows[3];

    bool enter=key.enter;

    switch(cursor.state)
    {
        case Main:
            if(right && cursor.index==0)
                {
                    cursor.state=Assignment;
                    cursor.index=0;
                }

            if(right && cursor.index==1)
                {
                    cursor.state=Project;
                    cursor.index=0;
                }

            if(right && cursor.index==2)
            {
                cursor.state=SubError;
            }
            
            if(up)
            {
                cursor.index--;
                if(cursor.index<0 || cursor.index>=NumMainScreen)  cursor.index=NumMainScreen-1;
            }

            if(down)
            {
               cursor.index++;
                if(cursor.index<0 || cursor.index>=NumMainScreen)  cursor.index=0; 
            }

        break;

        case Assignment:
            if(left)
            {
                cursor.state=Main;
                cursor.index=0;
            }
            
            if(right)
            {
                cursor.state=SubAssignment;
                cursor.prevIndex=cursor.index;
                cursor.index=0;
            }

            if(up)
            {
                cursor.index--;
                if(cursor.index<0 || cursor.index>=NumAssignments)  cursor.index=NumAssignments-1;
            }

            if(down)
            {
               cursor.index++;
                if(cursor.index<0 || cursor.index>=NumAssignments)  cursor.index=0; 
            }

        break;

        case SubAssignment:

            if(left)
            {
                cursor.state=Assignment;
                cursor.index=cursor.prevIndex;
            }

            if(right)
            {
                cursor.state=CurProbl;
            }

            if(up)
            {
                cursor.index--;
                if(cursor.index<0 || cursor.index>=Problems[cursor.prevIndex])  cursor.index=Problems[cursor.prevIndex]-1;
            }

            if(down)
            {
               cursor.index++;
                if(cursor.index<0 || cursor.index>=Problems[cursor.prevIndex])  cursor.index=0; 
            }

        break;

        case CurProbl:
            
            if(left)
            {
                cursor.state=SubAssignment;
            }

            if(enter)
            {
                menu.Assignments[cursor.prevIndex].assignment[cursor.index].state=OH;
                cursor.dontUpdateRecents=1;
            }
        break;

        case Project:
            if(left)
            {
                cursor.state=Main;
                cursor.index=0;
            }
            
            if(right)
            {
                cursor.state=subProject;
                cursor.prevIndex=cursor.index;
                cursor.index=0;
            }

            if(up)
            {
                cursor.index--;
                if(cursor.index<0 || cursor.index>=NumProjects)  cursor.index=NumProjects-1;
            }

            if(down)
            {
               cursor.index++;
                if(cursor.index<0 || cursor.index>=NumProjects)  cursor.index=0; 
            }

        break;

        case subProject:

            if(left)
            {
                cursor.state=Project;
                cursor.index=cursor.prevIndex;
            }

            if(right)
            {
                cursor.state=subProjectIssue;
            }

            if(up)
            {
                cursor.index--;
                if(cursor.index<0 || cursor.index>=projectProblems[cursor.prevIndex])  cursor.index=projectProblems[cursor.prevIndex]-1;
            }

            if(down)
            {
               cursor.index++;
                if(cursor.index<0 || cursor.index>=projectProblems[cursor.prevIndex])  cursor.index=0; 
            }

        break;

        case subProjectIssue:
            
            if(left)
            {
                cursor.state=subProject;
            }

            if(enter)
            {
                menu.Projects[cursor.prevIndex].assignment[cursor.index].state=OH;
                cursor.dontUpdateRecents=1;
            }
        break;

        case SubError:

            if(left)
            {
                cursor.state=Main;
                cursor.index=0;
            }

            if(up)
            {
                cursor.index--;
                if(cursor.index<0 || cursor.index>=NumErrors)  cursor.index=NumErrors-1;
            }

            if(down)
            {
               cursor.index++;
                if(cursor.index<0 || cursor.index>=NumErrors)  cursor.index=0; 
            }

        break;
    }

    for(int i=0;i<RecentCount;i++)
    {
        if(key.letters[i] && recents.used[i]) 
        {
            cursor.prevIndex=recents.HWNumber[i];
            cursor.index=recents.IssueNumber[i];
            cursor.state=CurProbl;
            cursor.dontUpdateRecents=1;
        }
    }

}

void printMenu(cursor_t cursor, Menu_t &menu, recents_t recents)
{
    switch(cursor.state)
    {
        case Main:

            std::cout << "*****EMBEDDED SYSTEMS DEBUGGER BOT*****" << std::endl;
            std::cout << "PLEASE CONSULT FOLDERS FOR HOMEWORK, PROJECT, AND ERROR PROBLEMS" << std::endl;
            std::cout << "IF ANSWER IS UNAVAILABLE, OFFICE HOURS CODE WILL BE PROVIDED FOR SPECIFIC PROBLEM\n" << std::endl;
            std::cout << "*****CONTROLS*****" << std::endl;
            std::cout << "use arrow keys to navigate\n" << std::endl;
            std::cout << "*****GOOD LUCK*****\n" << std::endl;

            if(cursor.index==0) std::cout<<"*";
            std::cout<<"\tHomworks"<<std::endl;
            if(cursor.index==1) std::cout<<"*";
            std::cout<<"\tProjects"<<std::endl;
            if(cursor.index==2) std::cout<<"*";
            std::cout<<"\tErrors"<<std::endl;

        break;
        case Assignment:
            for(int i=0;i<NumAssignments;i++)
            {
                if(i==cursor.index) std::cout<<"*";
                std::cout<<"\t"<<menu.Assignments[i].name<<std::endl;
            }
        break;
        case SubAssignment:
            for(int i=0;i<Problems[cursor.prevIndex];i++)
            {
                if(i==cursor.index) std::cout<<"*";
                std::cout<<"\t"<<Q[cursor.prevIndex][i]<<std::endl;
            }
        break;
        case CurProbl:
            std::cout<<Q[cursor.prevIndex][cursor.index]<<std::endl;
            std::cout<<std::endl;
            std::cout<<A[cursor.prevIndex][cursor.index]<<std::endl;

            if(menu.Assignments[cursor.prevIndex].assignment[cursor.index].state==OH)
            {
                std::cout<<"\n"<<OHLink;
                std::cout<<"\n"<<OHP[cursor.prevIndex][cursor.index];
            }
            else std::cout<<"\n\nIf this doesn't help, press Enter to get the OH link for THIS SPECIFIC ISSUE\n\n";

        break;
        case Project:
            for(int i=0;i<NumProjects;i++)
            {
                if(i==cursor.index) std::cout<<"*";
                std::cout<<"\t"<<menu.Projects[i].name<<std::endl;
            }
        break;
        case subProject:
            for(int i=0;i<projectProblems[cursor.prevIndex];i++)
            {
                if(i==cursor.index) std::cout<<"*";
                std::cout<<"\t"<<PQ[cursor.prevIndex][i]<<std::endl;
            }
        break;
        case subProjectIssue:
            std::cout<<PQ[cursor.prevIndex][cursor.index]<<std::endl;
            std::cout<<std::endl;
            std::cout<<PA[cursor.prevIndex][cursor.index]<<std::endl;

            if(menu.Projects[cursor.prevIndex].assignment[cursor.index].state==OH)
            {
                std::cout<<"\n"<<OHLink;
                std::cout<<"\n"<<POHP[cursor.prevIndex][cursor.index];
            }
            else std::cout<<"\n\nIf this doesn't help, press Enter to get the OH link for THIS SPECIFIC ISSUE\n\n";

        break;
        case SubError:
        break;
    }

    /*if(cursor.state != CurProbl)*/ printRecents(menu, recents, cursor);
}

void updateRecents(cursor_t cursor, Menu_t menu, recents_t &recents)
{
    if(cursor.state==CurProbl)
    {
        for(int i=RecentCount-1;i>0;i--)
        {
            recents.HWNumber[i]=recents.HWNumber[i-1];
            recents.IssueNumber[i]=recents.IssueNumber[i-1];
            recents.used[i]=recents.used[i-1];
        }
        recents.HWNumber[0]=cursor.prevIndex;
        recents.IssueNumber[0]=cursor.index;
        recents.used[0]=1;
    }
}

void printRecents(Menu_t menu, recents_t recents, cursor_t cursor)
{
    for(int i=0;i<RecentCount;i++)
    {
        if(recents.HWNumber[i] != -1 && recents.IssueNumber[i] != -1) 
        {
            char a = i+97;
            std::cout<<"\n"<<a<<"\t"<<Q[recents.HWNumber[i]][recents.IssueNumber[i]];
        }
    }
}

void menu(Menu_t &menu, cursor_t &cursor, keys key, recents_t &recents)
{
    updateCursor(cursor, key, menu, recents);
    if(!cursor.dontUpdateRecents) updateRecents(cursor, menu, recents);
    printMenu(cursor, menu, recents);
}