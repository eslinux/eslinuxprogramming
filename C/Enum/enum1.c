#include <stdio.h>

/* Global enum */
enum speed {
    SLOW,     /*0 */
    NORMAL,   /*1 */
    FAST      /*2 */
};

enum speed1 {
    S1_SLOW = 10, /*10 */
    S1_NORMAL,    /*11 */
    S1_FAST       /*12 */
};

enum speed2 {
    S2_SLOW = 10,      /*10 */
    S2_NORMAL = 20,    /*20 */
    S2_FAST = 30       /*30 */
};

typedef enum player_status { /* ten cua enum */
    ST_STOP = 0,
    ST_PLAYING,
    ST_PAUSED,
    ST_FAST_BACKWARD,
    ST_FAST_FORWARD
}player_status_t;/* ten kieu du lieu moi*/



int main()
{



    /* Local enum */
    enum color {
        RED,
        GREEN,
        BLUE
    };

    enum color mycolor = RED;
    player_status_t player_status =  ST_STOP;


    switch (mycolor) {
    case RED:
        printf("RED \n");
        break;
    case GREEN:
        printf("GREEN \n");
        break;
    case BLUE:
        printf("BLUE \n");
        break;
    default:
        break;
    }


    switch (player_status) {
    case ST_STOP:
        player_status = ST_PLAYING;
        printf("ST_STOP \n");
        break;
    case ST_PLAYING:
        printf("ST_PLAYING \n");
        break;
    case ST_PAUSED:
        printf("ST_PAUSED \n");
        break;
    case ST_FAST_BACKWARD:
        printf("ST_FAST_BACKWARD \n");
        break;
    case ST_FAST_FORWARD:
        printf("ST_FAST_FORWARD \n");
        break;
    default:
        break;
    }


    return 0;
}

