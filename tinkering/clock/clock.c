# include <stdio.h>
# include <time.h>
# include <windows.h>

int main() {
    while (1) {
        // Get current time
        time_t currentTime = time(NULL);
        struct tm *localTime = localtime(&currentTime);

        // Extract hour, min, sec from localTime
        int h = localTime -> tm_hour;
        int m = localTime -> tm_min;
        int s = localTime -> tm_sec;

        // Print hour:min:sec in digital format
        printf("\nClock:\n%02d:%02d:%02d", h, m, s);

        system("cls");
        sleep(1);
    }
}

// int main() {
//     int h, m, s;
//     int delay = 1000;

//     printf("Set time: \n");
//     scanf("%d %d %d", &h, &m, &s);
//     if(h > 12 || m > 60 || s > 60) {
//         printf("Error! \n");
//         exit(0);
//     }
//     while(1) {
//         s++;
//         if (s > 59) {
//             m++;
//             s = 0;
//         }
//         if (m > 59) {
//             h++;
//             m = 0;
//         }
//         if (h > 12) {
//             h = 1;
//         }
//         printf("\n Clock:\n %02d:%02d:%02d", h, m, s);
//         Sleep(delay);
//         system("cls");
//     }
// }
