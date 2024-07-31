#include "windowsWrapper.h"
#include <string>

#define NumMainScreen 3
#define NumAssignments 12
#define NumProjects 3
#define MaxProblems 19
#define MaxProjectProblems 15
#define NumErrors 15

#define RecentCount 10

#define NumProblemsHW1 15
#define NumProblemsHW2 19
#define NumProblemsHW3 14
#define NumProblemsHW4 11
#define NumProblemsHW5 11
#define NumProblemsHW6 11
#define NumProblemsHW7 9
#define NumProblemsHW8 15
#define NumProblemsHW9 15
#define NumProblemsHW10 15
#define NumProblemsHW11 15
#define NumProblemsHW12 15
#define NumProblemsProj1 15
#define NumProblemsProj2 15
#define NumProblemsProj3 15

enum HelpState {None, OH};
enum CursorState {Main, Assignment, SubAssignment, SubError, CurProbl, Project, subProject, subProjectIssue};

struct recents_t
{
    int HWNumber[RecentCount];
    int IssueNumber[RecentCount];
    bool used[RecentCount];
};

struct cursor_t
{
    CursorState state;
    int index;
    int prevIndex;
    bool dontUpdateRecents;
};

struct subMenu
{
    HelpState state;
};

struct AssignmentMenu
{
    subMenu assignment[MaxProblems];
    std::string name;
    int subCount;
};

struct Menu_t
{
    AssignmentMenu Assignments[NumAssignments];
    AssignmentMenu Projects[NumProjects];
    subMenu Errors[NumErrors];
};

void setUpQandA();
recents_t initializeRecents();
subMenu initializeErrorMenu();
subMenu initializeSubMenu();
AssignmentMenu initializeAssignmentMenu(int i, bool project);
Menu_t initializeMenu();
cursor_t initializeCursor();

void menu(Menu_t &menu, cursor_t &cursor, keys key, recents_t &recents);
void printMenu(cursor_t cursor, Menu_t &menu, recents_t recents);

void updateCursor(CursorState &cursor, keys key, Menu_t &menu, recents_t recents);

void updateRecents(cursor_t cursor, Menu_t menu, recents_t &recents);
void printRecents(Menu_t menu, recents_t recents, cursor_t cursor);