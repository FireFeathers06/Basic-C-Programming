
int Is_password_equal (const char *username, const char *password)
{
  /* Structure of the password file.  */
  struct spwd *shadow;
  char *encryption, *get_pwd;

  /* Get shadow entry matching NAME.*/
  shadow = getspnam (username);
  /* Close database. */
  endspent();

  if (shadow)                   // if name is in the file return true
    get_pwd = shadow->sp_pwdp; // get password from the shadow file
  else
    return 1;                  // name does not exist

  encryption = crypt (password, get_pwd);
  if (strcmp (encryption, get_pwd))    // strcmp() returns 0 when strings equal
    return 2;   // bad pw = 2
  else 
    return 0;   // success = 0

}
void main(){
    char username[MAX];
    char password[MAX];

    printf("Input username: ");
    scanf("%[^\n]", username);
    printf("Input password: ");
    scanf(" %[^\n]", password);

    int n;

    n = Is_password_equal(username,password);

    if (n == 0)
        printf("Success\n");
    else if (n == 2)
        printf("Bad password or User do not exist\n"); // bad pwd
    else
        printf("Bad password or User do not exist\n"); // user dont exist

}

// gcc -o Q3 Q3.c -lcrypt
// sudo ./Q3

