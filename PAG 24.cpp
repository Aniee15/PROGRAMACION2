namespace StudentNames
{
    enum StudentNames
    {
        kenny, // 0
        kyle, // 1
        stan, // 2
        butters, // 3
        artman, // 4
        max_students // 5
    };
}

int main()
{
    int testScores[StudentNames::max_students]{};
    testScores[StudentNames::stan] = 76;

    return 0;
}