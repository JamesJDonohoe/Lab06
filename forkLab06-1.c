  #include<stdio.h> 
  #include<unistd.h> 
  #include<stdlib.h> 
  
  int main() 
  { 
     pid_t pid; 
     int tmp = 10; 
 
     printf ( "The main program process ID is %d\n\n", getpid() ); 
     printf ( "Calling fork now\n\n" ); 
     // The return value to the parent process will be the Process ID (PID) of the child 
     // The child gets a return value of 0 
   
     pid = fork(); 
     printf ( "fork has been called, pid returned is %d\n", pid ); 
 
     
     if ( pid == 0  ) 
     { 
        printf ( "I am child my pid is: %d\n\n", getpid() ); 
		printf ( "fork value returned is %d\n", pid ); 
        printf ( "the value of tmp is: %d\n", tmp ); 
		printf ( "my parent value is: %d\n", getppid() ); 
     } 
     else if ( pid > 0) 
     { 
        printf ( "I am parent my pid is: %d\n\n", getpid() ); 
		printf ( "fork value returned is %d\n", pid ); 
        printf ( "the value of tmp is: %d\n", tmp );
     } 
     else 
        printf ( "Fork failed, no child\n" ); 
  return 0; 
  }