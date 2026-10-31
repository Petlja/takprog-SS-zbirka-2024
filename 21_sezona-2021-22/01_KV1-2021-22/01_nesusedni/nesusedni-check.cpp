// Petlja's grader before 2025 read the exit code as a score: < 0 wrong, 0 or more accepted.
// Today's grader accepts only exit 0 and reads the score from stdout, so main below maps one to the other.
#define main legacy_main
#include <cstdlib>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

const int SCORE = 5;

int main(int argc, char *argv[])
{
	ifstream ouf(argv[1]); //Takmicar
	ifstream sof(argv[2]); //Komisija
	ifstream inf(argv[3]); //Input

	string sol, sol2, out;
	string nosolution = "nemoguce";
	sof >> sol;
	ouf >> out;

	sol2 = sol;
	reverse(sol2.begin(), sol2.end());

	if ((sol.compare(out) == 0) || (sol.compare(nosolution) != 0 && sol2.compare(out) == 0))
	{
		return SCORE;
	}
	else
	{
		return -1;
	}
}

#undef main
#include <cstdio>
int main(int argc, char *argv[])
{
    int r = legacy_main(argc, argv);
    if (r < 0) return 1;
    printf("%d\n", r);
    return 0;
}
