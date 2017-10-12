#include <iostream>
#include <cmath>

using namespace std;


// Taken from: http://www.slate.com/articles/sports/sports_nut/2008/03/the_lead_is_safe.html
int main()
{
    int score1, score2, remaining, possession;

    cout << "Enter Team 1's score: ";
    cin >> score1;

    cout << "Enter Team 2's score: ";
    cin >> score2;

    cout << "Who has the ball (enter 1 or 2)? ";
    cin >> possession;

    cout << "Enter the seconds remaining: ";
    cin >> remaining;

    // Take the number of points one team is ahead.
    // Subtract three.
    double lead = abs(score1 - score2) - 3;

    // Add a half-point if the team that is ahead
    // has the ball, and subtract a half-point if
    // the other team has the ball.
    if (((score1 > score2) && (possession == 1))
        || ((score2 > score1) && (possession == 2)))
    {
        lead += 0.5;
    }
    else
    {
        lead -= 0.5;
    }

    // Numbers less than zero become zero.
    if (lead < 0)
    {
        lead = 0;
    }

    // Square that.
    lead = pow(lead, 2);

    cout << lead << endl;
    // If the result is greater than the number of
    // seconds left in the game, the lead is safe.
    if (lead > remaining)
    {
        cout << "The lead is safe." << endl;
    }
    else
    {
        cout << "The lead isn't safe." << endl;
    }

    return 0;
}
