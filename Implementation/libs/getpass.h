#ifndef GETPASS_H
  #define GETPASS_H
  #include <termios.h>
  #include <unistd.h>
  #include <stdio.h>
  #include <iostream>
  #include <string>
  using namespace std;

  int mygetch() {
      int ch;
      struct termios t_old, t_new;

      tcgetattr(STDIN_FILENO, &t_old);
      t_new = t_old;
      t_new.c_lflag &= ~(ICANON | ECHO);
      tcsetattr(STDIN_FILENO, TCSANOW, &t_new);

      ch = getchar();

      tcsetattr(STDIN_FILENO, TCSANOW, &t_old);
      return ch;
  }





  string mygetpass()
  {
    const char BACKSPACE=127;
    const char RETURN=10;

    string password;
    unsigned char ch=0;

    while((ch=mygetch())!=RETURN)
      {
        if(ch==BACKSPACE)
          {
              if(password.length()!=0)
                {
                  cout <<"\b \b";
                  password.resize(password.length()-1);
                }
          }
        else
          {
              password+=ch;
              cout <<'*';
          }
      }
    cout <<endl;
    return password;
  }
#endif
