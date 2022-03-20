#include "Tournament.h"
using namespace std;

Tournament::Tournament()
{

}

Player * Tournament::run(array<Player *, 8> competitors)
{
    Referee ref;
    char result;
    Player * semiFinal1;
    Player * semiFinal2;
    Player * semiFinal3; 
    Player * semiFinal4;
    Player * final1;
    Player * final2;
    Player * winner;
    int P1win, P2win, P3win, P4win, P5win, P6win, P7win, P8win, semi1win, semi2win, semi3win, semi4win, final1win, final2win;

    //round 1
    for (int i=0;i<5;i++)
    {
        result=ref.refGame(competitors[0], competitors[1]);

        if (result=='W')
        {
            P1win++;
        }
        else if (result=='L')
        {
            P2win++;
        }

    }
    if (P1win>=P2win)
    {
        semiFinal1=competitors[0];
    }
    else
    {
        semiFinal1=competitors[1];
    }

    //round2
    for (int i=0;i<5;i++)
    {
        result=ref.refGame(competitors[2], competitors[3]);

        if (result=='W')
        {
            P3win++;
        }
        else if (result=='L')
        {
            P4win++;
        }

    }
    if (P3win>=P4win)
    {
        semiFinal2=competitors[2];
    }
    else
    {
        semiFinal2=competitors[3];
    }

    //round3
    for (int i=0;i<5;i++)
    {
        result=ref.refGame(competitors[4], competitors[5]);

        if (result=='W')
        {
            P5win++;
        }
        else if (result=='L')
        {
            P6win++;
        }

    }
    if (P5win>=P6win)
    {
        semiFinal3=competitors[4];
    }
    else
    {
        semiFinal3=competitors[5];
    }

    //round4
     for (int i=0;i<5;i++)
    {
        result=ref.refGame(competitors[6], competitors[7]);

        if (result=='W')
        {
            P7win++;
        }
        else if (result=='L')
        {
            P8win++;
        }

    }
    if (P7win>=P8win)
    {
        semiFinal4=competitors[6];
    }
    else
    {
        semiFinal4=competitors[7];
    }

    //round5
    for (int i=0;i<5;i++)
    {
        result=ref.refGame(semiFinal1, semiFinal2);

        if (result=='W')
        {
            semi1win++;
        }
        else if (result=='L')
        {
            semi2win++;
        }

    }
    if (semi1win>=semi2win)
    {
        final1=semiFinal1;
    }
    else
    {
        final1=semiFinal2;
    }

    //round6
    for (int i=0;i<5;i++)
    {
        result=ref.refGame(semiFinal3, semiFinal4);

        if (result=='W')
        {
            semi3win++;
        }
        else if (result=='L')
        {
            semi4win++;
        }

    }
    if (semi3win>=semi4win)
    {
        final2=semiFinal3;
    }
    else
    {
        final2=semiFinal4;
    }

    //round7
    for (int i=0;i<5;i++)
    {
        result=ref.refGame(final1, final2);

        if (result=='W')
        {
            final1win++;
        }
        else if (result=='L')
        {
            final2win++;
        }

    }
    if (final1win>=final2win)
    {
        winner=final1;
    }
    else
    {
        winner=final2;
    }

    //winner
    return winner;
}