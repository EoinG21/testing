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
        printf ( "child pid = %d\n\n", getpid() ); 
		printf ( "fork value = %d\n", pid ); 
        printf ( "tmp value = %d\n", tmp ); 
		printf ( "parent value = %d\n", getppid() ); 
     } 
     else if ( pid > 0) 
     { 
        printf ( "parent pid = %d\n\n", getpid() ); 
		printf ( "fork value = %d\n", pid ); 
        printf ( "tmp value = %d\n", tmp );
     } 
     else 
        printf ( "Fork failed, no child\n" ); 
  return 0; 
  }