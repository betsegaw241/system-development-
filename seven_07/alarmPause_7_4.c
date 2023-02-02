/*
  C program to demonstrate
  alarm() & pause() siganls

*/

#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <time.h>

void catcher( int sig ) {
    printf( "Signal catcher called for signal %d\n", sig );
}

void timestamp( char *str ) {
    time_t t;

    time(&t);
    printf( "The time %s is %s\n", str, ctime(&t) );
}

int main( int argc, char *argv[] )  {

    struct sigaction sigact;

    sigemptyset( &sigact.sa_mask );
    sigact.sa_flags = 0;
    sigact.sa_handler = catcher;
    sigaction( SIGALRM, &sigact, NULL );

    alarm( 10 );

    timestamp( "before pause" );
    pause();
    timestamp( "after pause" );

    return( 0 );
}