int numStudents{ 5 };
int score0{ 84 };
int score1{ 92 };
int score2{ 76 };
int score3{ 81 };
int score4{ 56 };

int totalScore{ score0 + score1 + score2 + score3 + score4 };
auto averageScore{ static_cast<double>(totalScore) / numStudents };