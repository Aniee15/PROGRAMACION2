int scores[]{ 84, 92, 76, 81, 56 };
int numStudents{ static_cast<int>(std::size(scores)) };
int totalScore{ 0 };

for (int student{ 0 }; student < numStudents; ++student)
    totalScore += scores[student];

auto averageScore{ static_cast<double>(totalScore) / numStudents };