

#ifndef CAR_BLACK_BOX_H
#define CAR_BLACK_BOX_H

//to display dashboard screen
void display_dash_board(char event[], unsigned char speed);
//to display time
void display_time(void);
//to get time from registers
void get_time(void);
//to login using password
char login(char key, char reset_pasword );
//to show login menu
char login_menu(char key, char reset_menu);
//to  log event in an array
void log_car_event (char *event ,unsigned char speed);
//to view log
void view_log(unsigned char key, char reset_shift);
//to clear log
char clear_log (char reset_memory);
//to change time
char change_time( unsigned char key ,unsigned char reset_time );
//to get stored password
void get_password(char *pwd);
//to change password
char change_password(unsigned char key, char reset_pasword );
//to download logs using serial port
void download_log(void);
#endif	/*CAR_BLACK_BOX_H*/

