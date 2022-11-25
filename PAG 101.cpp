int count { 0 };
do
{
	if (count == 5)
		continue;
	std::cout << count << ' ';
}while (++count < 10);