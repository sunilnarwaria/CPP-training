#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main()
{
      string s;
      int vowel(0),consonant(0);
      cout<<"Enter any string  := ";
      cin>>s;
     for(int i = 0;i <s.size();i++)
    {
      switch(s[i])
      {
      case 'A':
          vowel++;
           break;

      case 'E':
             vowel++;
           break;

      case 'I':
            vowel++;
           break;

      case 'O':
            vowel++;
           break;

      case 'U':
            vowel++;
           break;

      case 'a':
            vowel++;
           break;

      case 'e':
            vowel++;
           break;

      case 'i':
            vowel++;
           break;

      case 'o':
           vowel++;
           break;

      case 'u':
            vowel++;
           break;

      default:
           consonant++;
      }

    }
    cout<<"Number of vowels are: "<<vowel<<endl;
     cout<<"Number of consonant are: "<<consonant<<endl;



}
