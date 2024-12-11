#include <simplecpp>

main_program
{
    float basic, gross, da, hra;

    /* Input basic salary of employee */
    cin >> basic;

    /* Calculate D.A and H.R.A according to specified conditions */
    if (basic <= 10000)
    {
        da = basic * 0.8;
        hra = basic * 0.2;
    }
    else if (basic <= 20000)
    {
        da = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da = basic * 0.95;
        hra = basic * 0.3;
    }

    /* Calculate gross salary */
    gross = basic + hra + da;
    cout << gross;
}
