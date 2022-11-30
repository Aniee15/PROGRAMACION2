int main()
{
    int testScores[static_cast<int>(StudentNames::max_students)]{};
    testScores[static_cast<int>(StudentNames::stan)] = 76;

    return 0;
}