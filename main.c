#include <stdio.h>
#include <string.h>

void Encrypt (char msg [], int key);

void Decrypt (char *p, int key);

int main() {
  int key;
  char str [50];
  printf ("");
  gets (str);
  printf ("");
  scanf ("%d", &key);
  
  if (key > 0 && key < 26) // as per requirements
  {
      Encrypt (str, key);
      printf ("Encrypted message as: %s\n", str);
      
      Decrypt (str, key);
      printf ("Decrypted message as: %s", str);
      
  }
  else
  printf ("\n Key is invalid");
}

void Encrypt (char message[], int key){
    int i, ch;
    int change, temp, key_temp;
    
    for (i = 0, message [i] != '\0'; ++i;)
    {
            ch = message [i];
            if ((ch >= 65 && ch <= 90))
        {
            change = ch + key;
            if (change <= 90)
            {
                ch = ch + key;
            }
            else
            {
                temp = 90 - ch;
                key_temp = key - temp;
                ch = 64 + key_temp;
            }
            message[i] = ch;
    }
    else
    if((ch >= 97 && ch <= 122))
    {
        change = ch + key;
        if (change <= 122)
        {
            ch = ch + key;
        }
        else
        {
            temp= 122 - ch;
            key_temp = key - temp;
            ch = 96 + key_temp;
        }
        message [i] = ch;
}
}
}

void Decrypt (char msg [], int key){
    int i, ch;
    int change, temp, key_temp;
    
    for (i = 0; msg[i] != '\0'; ++i)
    {
        ch = msg [i];
        if ((ch >= 65 && ch <= 90))
        {
            if ((ch - key) >= 65)
             }
        else
        {
            temp = ch - 65;
            key_temp = key - temp;
            ch = 91 - key_temp;
        }
        msg [i] = ch;
    }
    else
    if ((ch >= 97 && ch <= 122))
    {
        if ((ch - key) >= 97)
        {
            ch = ch -key;
        }
        else
        {
            temp = ch - 97;
            key_temp = key - temp;
            ch = 123 - key_temp;
        }
        msg [i] = ch;
    }
}