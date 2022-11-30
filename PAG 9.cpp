// usando una constante literal
int numberOfLessonsPerDay[7]{}; // ok

// usando una constante simbolica constexpr
constexpr int daysPerWeek{ 7 };
int numberOfLessonsPerDay[daysPerWeek]{}; // ok

// usando un enumerador
enum Weekday
{
    monday,     tuesday,
    wednesday,      thursday,
    friday,     saturday,       sunday,

    maxWeekday
};
int numberOfLessonsPerDay[maxWeekday]{}; // ok

#define DAYS_PER_WEEK 7
int numberOfLessonsPerDay[DAYS_PER_WEEK]{};
// funciona, pero no haga esto (use una constante simbolica constexpr en su lugar)