#include <iostream>

int main() {
  unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
  unsigned spaceCnt = 0, tabCnt = 0, newlineCnt = 0, otherCnt = 0;
  unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
  bool fPresent = false;
  char ch;
  while (std::cin.get(ch)) {  // `<<` operator will omit whitespace characters
    switch(ch) {
      case 'A': case 'a':
        ++aCnt;
        fPresent = false;
        break;
      case 'E': case 'e':
        ++eCnt;
        fPresent = false;
        break;
      case 'I':
        ++iCnt;
        fPresent = false;
        break;
      case 'i':
        ++iCnt;
        if (fPresent) {
          ++fiCnt;
          fPresent = false;
        }
        break;
      case 'O': case 'o':
        ++oCnt;
        fPresent = false;
        break;
      case 'U': case 'u':
        ++uCnt;
        fPresent = false;
        break;
      case ' ':
        ++spaceCnt;
        fPresent = false;
        break;
      case '\t':
        ++tabCnt;
        fPresent = false;
        break;
      case '\n':
        ++newlineCnt;
        fPresent = false;
        break;
      case 'f':
        if (fPresent)
          ++ffCnt;
        else
          fPresent = true;
        break;
      case 'l':
        if (fPresent) {
          ++flCnt;
          fPresent = false;
        }
        break;
      default:
        fPresent = false;
        ++otherCnt;
    }
  }
  std::cout << "Number of vowel a:\t" << aCnt << '\n'
            << "Number of vowel e:\t" << eCnt << '\n'
            << "Number of vowel i:\t" << iCnt << '\n'
            << "Number of vowel o:\t" << oCnt << '\n'
            << "Number of vowel u:\t" << uCnt << '\n'
            << "Number of space:\t" << spaceCnt << '\n'
            << "Number of tab:\t" << tabCnt << '\n'
            << "Number of newline:\t" << newlineCnt << '\n'
            << "Number of sequence ff:\t" << ffCnt << '\n'
            << "Number of sequence fl:\t" << flCnt << '\n'
            << "Number of sequence fi:\t" << fiCnt << '\n'
            << "Number of others:\t" << otherCnt << std::endl;

  return 0;
}
